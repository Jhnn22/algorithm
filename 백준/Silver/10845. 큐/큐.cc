#include <iostream>
#include <queue>
#include <string>
#define FAST_IO cin.tie(NULL)->ios::sync_with_stdio(false);
using namespace std;

int main(){
    FAST_IO
    
    int N, n;
    cin >> N;
    
    string str;
    queue<int> q;
    for(int i = 0; i < N; i++){
       cin >> str;
       if(str == "push"){
           cin >> n;
           q.push(n);
       } else if(str == "pop"){
           if(q.empty()){
               cout << "-1" << '\n';
               continue;
           }
           cout << q.front() << '\n';
           q.pop();
       } else if(str == "size"){
           cout << q.size() << '\n';
       } else if(str == "empty"){
           cout << (q.empty() ? 1 : 0) << '\n';
       } else if(str == "front"){
           if(q.empty()){
               cout << "-1" << '\n';
               continue;
           }
           cout << q.front() << '\n';
       } else if(str == "back"){
           if(q.empty()){
               cout << "-1" << '\n';
               continue;
           }
           cout << q.back() << '\n';
       }
        
    }
    
    return 0;
}