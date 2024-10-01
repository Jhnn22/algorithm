#include <iostream>
#include <vector>
#include <algorithm>
#define FAST_IO cin.tie(NULL)->ios::sync_with_stdio(false);
using namespace std;

int main() {
	FAST_IO
	int x, y;
	cin >> x >> y;
	vector<vector<char>> v(x);
	for (int i = 0; i < x; i++) {
		vector<char> row(y);
		for (int j = 0; j < y; j++) {
			cin >> row[j];
		}
		v[i] = row;
	}

	int n = min(x, y);

	for (int k = n; k > 0; k--) {
		for (int i = 0; i <= x - k; i++) {
			for (int j = 0; j <= y - k; j++) {
				char tmp = v[i][j];
				if ((tmp == v[i + (k - 1)][j]) && (tmp == v[i][j + (k - 1)]) && (tmp == v[i + (k - 1)][j + (k - 1)])) {
					cout << k * k << '\n';
					return 0;
				}
			}
		}
	}
	


	return 0;
}