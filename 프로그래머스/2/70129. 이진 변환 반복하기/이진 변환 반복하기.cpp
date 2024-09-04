#include <string>
#include <vector>
using namespace std;

void binary_conversion(int n, string& tmp){
    tmp = to_string(n%2) + tmp;
    if(n/2 == 0) return;
    binary_conversion(n/2, tmp);
}

void count(string& s, int& n1, int& n2){
    int n = 0;
    for(const char& ch : s) if(ch == '1') n++;
    n1 ++;
    n2 += s.size() - n;
    string tmp;
    binary_conversion(n, tmp);
    if(tmp == "1") return;
    count(tmp, n1, n2);
    
}

vector<int> solution(string s) {
    vector<int> answer;
    int n1 = 0;
    int n2 = 0;
    count(s, n1, n2);
    answer.push_back(n1);
    answer.push_back(n2);
    return answer;
}