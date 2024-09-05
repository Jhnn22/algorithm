#include <iostream>
#include <unordered_map>
#include <vector>
#define FAST_IO cin.tie(NULL)->ios::sync_with_stdio(false);
using namespace std;

int main(){
    FAST_IO
    
    int N, n1;
    cin >> N;
    unordered_map<int, int> freq;
    for(int i = 0; i < N; i++){
        cin >> n1;
        freq[n1]++;
    }
    
    int M, n2;
    cin >> M;
    vector<int> answer(M, 0);
    for(int i = 0; i < M; i++){
        cin >> n2;
        auto it = freq.find(n2);
        if(it != freq.end()){
            answer[i] = it->second;
        }
    }
    for(const int& n : answer){
        cout << n << ' ';
    }
    
    return 0;
}