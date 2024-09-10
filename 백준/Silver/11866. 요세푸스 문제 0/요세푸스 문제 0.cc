#include <iostream>
#include <queue>
#define FAST_IO cin.tie(NULL)->ios::sync_with_stdio(false);
using namespace std;

int main() {
    FAST_IO

        int N, K;
    cin >> N >> K;

    queue<int> q;
    for (int i = 1; i <= N; i++) {
        q.push(i);
    }

    cout << '<';
    int count = 0;
    while(!q.empty()) {
        count = (count % K) + 1;
        if (count == K) {
            cout << q.front();
            q.pop();
            if (!q.empty()) cout << ", ";
            continue;
        }
        q.push(q.front());
        q.pop();
    }
    cout << '>';



    return 0;
}