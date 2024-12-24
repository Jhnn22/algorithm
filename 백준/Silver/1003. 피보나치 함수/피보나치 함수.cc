#include <iostream>
#include <vector>
using namespace std;

int main() {
	int T; cin >> T;

	for (int i = 0; i < T; i++) {
		int N; cin >> N;
		
		vector<pair<int, int>> dp(N + 1);
		dp[0] = { 1, 0 };
		dp[1] = { 0, 1 };
		
		if (N > 1) {
			for (int j = 2; j <= N; j++) {
				dp[j] = { dp[j - 1].first + dp[j - 2].first, dp[j - 1].second + dp[j - 2].second };
			}
		}

		cout << dp[N].first << ' ' << dp[N].second << '\n';
	}
	
	return 0;
}