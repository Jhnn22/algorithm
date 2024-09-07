#include <string>
#include <vector>
#include <unordered_map>
#include <sstream>
using namespace std;

void split(vector<string>& record, unordered_map<string, vector<string>>& info){
    string trash, key, value;
    istringstream record_stream;
    for(const auto& message : record){
        if(message[0] == 'E' || message[0] == 'C'){
            record_stream.clear();
            record_stream.str(message);
            record_stream >> trash >> key >> value;
            auto& v = info[key]; 
            v.push_back(value);       
        }
    } 
}

vector<string> solution(vector<string> record) {
    vector<string> answer;
    unordered_map<string, vector<string>> info;
    split(record, info);
    
    string enter_message = "님이 들어왔습니다.";
    string leave_message = "님이 나갔습니다.";
    for(const auto& message : record){
        int first_space = message.find(' ');
        int second_space = message.find(' ', first_space + 1);
        string id = message.substr(first_space + 1, second_space - first_space - 1);
        if(message[0] == 'E'){
            string str = info.find(id)->second.back() + enter_message;
            answer.push_back(str);
        } else if(message[0] == 'L'){
            string str = info.find(id)->second.back() + leave_message;
            answer.push_back(str);
        } 
    }
    
    
    return answer;
}