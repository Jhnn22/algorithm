#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int solution(vector<int> citations) {
    int answer = 0;
    int n = citations.size();
    sort(citations.begin(), citations.end(), [](int a, int b){
       return a > b; 
    });
    
    for(int i = 0; i < n; i++){
        if(citations[i] >= i + 1){
            answer = i + 1;
        }
    } 
    
    return answer;
}