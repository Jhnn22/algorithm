#include <iostream>
#include <bitset>
#define FAST_IO cin.tie(NULL)->ios::sync_with_stdio(false);
using namespace std;

int main() {
    FAST_IO
    bitset<20> S;
    int M;
    cin >> M;

    string str;
    int n;
    for (int i = 0; i < M; i++) {
        cin >> str;
        if (str == "all") S.set();
        else if (str == "empty") S.reset();
        else {
            cin >> n;
            if (str == "add") {
                S.set(n - 1);
            }
            else if (str == "remove") {
                S.reset(n - 1);
            }
            else if (str == "check") {
                cout << S.test(n - 1) << '\n';
            }
            else if (str == "toggle") {
                S.flip(n - 1);
            }
        }   
    }

    return 0;
}