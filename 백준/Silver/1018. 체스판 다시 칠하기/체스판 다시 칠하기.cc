#include <iostream>
#include <vector>
using namespace std;

int count(vector<vector<char>>& v, int row, int col){
    int n = 0;
    for(int i=row; i<row+8; i++){
        for(int j=col; j<col+8; j++){
            if((i+j)%2 == 0){
                if(v[i][j] != 'W') n++;
            }
            else{
                if(v[i][j] != 'B') n++;
            }
        }
    }
    return min(n, 64 - n);
}

int main(){
    int N, M;
    cin >> N >> M;
    vector<vector<char>> v(N, vector<char>(M));
    for(int i=0; i<N; i++){
        for(int j=0; j<M; j++){
            char input;
            cin >> input;
            v[i][j] = input;
        }
    }
    
    int min_count = 64;
    for(int i=0; i<=N-8; i++){
        for(int j=0; j<=M-8; j++){
            min_count = min(min_count, count(v, i, j));
        }
    }
    cout << min_count;
    
    return 0;
}