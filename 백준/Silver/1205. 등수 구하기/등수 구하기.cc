#include <iostream>
#include <vector>
#include <algorithm>
#define FAST_IO cin.tie(NULL)->sync_with_stdio(false);
using namespace std;

int main() {
	FAST_IO
	int N, new_score, P;
	cin >> N >> new_score >> P;
	if (N == 0) {
		cout << 1;
		return 0;
	}

	vector<int> score_list(N);
	for (int i = 0; i < N; i++) {
		cin >> score_list[i];
	}
	sort(score_list.begin(), score_list.end(), [=](int x, int y) {
		return x > y;
	});

	if (N < P) {
		int rank = 1;
		for (int i = 0; i < N; i++) {
			if (new_score >= score_list[i]) {
				cout << rank;
				return 0;
			}
			rank++;
		}
		cout << rank;
	}
	else {
		int rank = 1;
		for (int i = 0; i < N; i++) {
			if (new_score >= score_list[i]) {
				if (new_score == score_list[i]) continue;
				cout << rank;
				return 0;
			}
			rank++;
		}
		cout << -1;
	}

	return 0;
}