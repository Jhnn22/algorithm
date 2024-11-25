#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int N; cin >> N;
	vector<int> v(N);
	for (int i = 0; i < N; i++) {
		cin >> v[i];
	}

	sort(v.begin(), v.end(), [](int x, int y) {
		return x > y;
	});

	int answer = 0;
	for (int i = 0; i < N; i++) {
		answer += v[i] * (i + 1);
	}
	cout << answer;

	return 0;
}