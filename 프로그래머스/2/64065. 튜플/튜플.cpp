#include <string>
#include <vector>
#include <map>
using namespace std;

void push(vector<int>& answer, string& tmp){
    answer.push_back(stoi(tmp));
    tmp.clear();
}

vector<int> solution(string s) {
    vector<int> answer;
    map<int, vector<int>> m;
    string tmp;
    s = s.substr(1, s.size()-2);
    for(const char& ch : s){
        if(ch=='{') continue;
        if(ch=='}'){
            push(answer, tmp);
            m[answer.size()] = answer;
            answer.clear();
            continue;
        }
        if(ch==','){
            if(tmp.empty()) continue;
            push(answer, tmp);
        }
        else tmp += ch;
    }
    
    answer.push_back(m[1][0]);
    for(int i=2; i<=m.size(); i++){
        for(int j=0; j<i; j++){
            answer.push_back(m[i][j]);
        }
    }
    
    for(int i=0; i<answer.size(); i++){
        for(auto it=answer.begin()+i+1; it!=answer.end();){
            if(answer[i] == *it) it = answer.erase(it);
            else it++;
        }
    }
    
    
    
    return answer;
}