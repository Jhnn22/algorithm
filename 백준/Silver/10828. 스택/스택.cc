#include <iostream>
#include <string>
#include <stack>
#define FAST_IO cin.tie(NULL)->ios::sync_with_stdio(false);
using namespace std;

int main(){
    FAST_IO
    
    int N, n;
    cin >> N;
    
    string str;
    stack<int> s;
    for(int i = 0; i < N; i++){
        cin >> str;
        if(str == "push"){
            cin >> n;
            s.push(n);
        } else if(str == "pop"){
            if(s.empty()){
                cout << "-1" << '\n';
                continue;
            }
            cout << s.top() << '\n';
            s.pop();
        } else if(str == "size"){
            cout << s.size() << '\n';
        } else if(str == "empty"){
            cout << (s.empty() ? 1 : 0) << '\n';
        } else if(str == "top"){
            if(s.empty()){
                cout << "-1" << '\n';
                continue;
            }
            cout << s.top() << '\n';
        }
    }
    
    return 0;
}
