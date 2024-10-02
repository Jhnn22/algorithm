#include <iostream>
#include <unordered_map>
#include <algorithm>
#define FAST_IO cin.tie(NULL)->ios::sync_with_stdio(false);
using namespace std;

int main() {
	FAST_IO
	int N, M;
	cin >> N >> M;
	unordered_map<string, int> um;
	string name;
	for (int i = 0; i < N; i++) {
		cin >> name;
		um[name]++;
	}
	for (int i = 0; i < M; i++) {
		cin >> name;
		um[name]++;
	}

	int count = 0;
	vector<string> answer;
	for (const auto& pair : um) {
		if (pair.second == 2) {
			count++;
			answer.push_back(pair.first);
		}
	}

	sort(answer.begin(), answer.end());
	cout << count << '\n';
	for (const auto& str : answer) {
		cout << str << '\n';
	}

	return 0;
}