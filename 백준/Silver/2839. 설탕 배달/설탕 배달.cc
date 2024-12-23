#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int N; cin >> N;
	int answer = N;

	for (int i = 0; i <= N / 5; i++) {
		if ((N - 5 * i) % 3 == 0) {
			answer = min(answer, i + (N - 5 * i) / 3);
		}
	}

	if (answer == N) {
		cout << "-1";
		return 0;
	}
	cout << answer;
	
	return 0;
}