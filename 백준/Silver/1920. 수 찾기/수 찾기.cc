#include <iostream>
#include <vector>
#include <unordered_set>
#include <algorithm>
#define FAST_IO cin.tie(NULL)->ios::sync_with_stdio(false);
using namespace std;

int main(){
    FAST_IO
    
    int N, input;
    cin >> N;
    unordered_set<int> us;
    for(int i=0; i<N; i++){
        cin >> input;
        us.insert(input);
    }
    
    int M, target;
    cin >> M;
    vector<int> results(M, 0);
    for(int i=0; i<M; i++){
        cin >> target;
        if(us.count(target) > 0) results[i] = 1;
    }
    
    for(const int& result : results) cout << result << '\n';
    
    return 0;
}