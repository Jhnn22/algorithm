#include <iostream>
#include <vector>
using namespace std;

int main() {
	int N; cin >> N;
	int input;
	vector<int> answer(N);
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			cin >> input;

			answer[i] |= input;
		}
	}

	for (auto& a : answer) {
		cout << a << ' ';
	}

	return 0;
}