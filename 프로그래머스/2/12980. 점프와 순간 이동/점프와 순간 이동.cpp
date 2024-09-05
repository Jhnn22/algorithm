#include <iostream>
using namespace std;

void f(int n, int& ans){
    if(n%2 == 1) ans++;
    if(n/2 == 1){
        ans++;
        return;
    }
    if(n == 0) return;
    f(n/2, ans);
}

int solution(int n)
{
    int ans = 0;
    f(n, ans);
    return ans;
}