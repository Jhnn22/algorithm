#include <iostream>
#include <stack>
#define FAST_IO cin.tie(NULL)->ios::sync_with_stdio(false);
using namespace std;

int main(){
    FAST_IO
    
    int K;
    cin >> K;
    
    stack<int> s;
    int input;
    for(int i=0; i<K; i++){
        cin >> input;
        if(!s.empty() && input == 0){
            s.pop();
        }
        else s.push(input);
    }
    
    int sum = 0;
    while(!s.empty()){
        sum += s.top();
        s.pop();
    }
    cout << sum;
    
    return 0;
}