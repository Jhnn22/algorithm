#include<string>
#include<stack>
#include <iostream>

using namespace std;

bool solution(string s)
{
    bool answer = true;
    stack<char> tmp;
    for(const char& ch : s){
        if(tmp.empty()){
            if(ch=='(') tmp.push(ch);
            else return false;
        }else{
            if(ch=='(') tmp.push(ch);
            else tmp.pop();
        }     
    }
    if(!tmp.empty()) answer = false;
    // [실행] 버튼을 누르면 출력 값을 볼 수 있습니다.
    cout << "Hello Cpp" << endl;

    return answer;
}