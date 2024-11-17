#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;

int main() {
	int N, M; cin >> N >> M;

	vector<string> v(N);
	for (int i = 0; i < N; i++) {
		cin >> v[i];
	}

	string DNA;
	int Hamming_Distance = 0;
	for (int i = 0; i < M; i++) {
		map<char, int> m;
		for (int j = 0; j < N; j++) {	
			m[v[j][i]]++;
		}

		vector<pair<char, int>> tmp(m.begin(), m.end());
		sort(tmp.begin(), tmp.end(), [](const pair<char, int> &prev, const pair<char, int> &current) {
			return prev.second > current.second;
		});

		DNA += tmp[0].first;
		for (int i = 1; i < tmp.size(); i++) {
			Hamming_Distance += tmp[i].second;	
		}
	}
	cout << DNA << '\n' << Hamming_Distance;

	return 0;
}