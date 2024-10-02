#include <iostream>
#include <vector>
#include <algorithm>
#define FAST_IO cin.tie(NULL)->ios::sync_with_stdio(false);
using namespace std;

int main() {
	FAST_IO
	int N, M;
	cin >> N >> M;

	vector<int> set(M), each(M);
	for (int i = 0; i < M; i++) {
		cin >> set[i] >> each[i];
	}

	sort(set.begin(), set.end());
	sort(each.begin(), each.end());

	int set_num = N / 6;
	int each_num = N % 6;

	if (each_num * each[0] >= set[0]) {
		cout << (set_num + 1) * set[0];
	}
	else if (set[0] >= each[0] * 6) {
		cout << each[0] * N;
	}
	else {
		cout << set_num * set[0] + each_num * each[0];
	}
	

	return 0;
}