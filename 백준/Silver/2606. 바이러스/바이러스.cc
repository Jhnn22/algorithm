#include <iostream>
#include <vector>
#include <queue>
#define FAST_IO cin.tie(NULL)->ios::sync_with_stdio(false)
using namespace std;

vector<int> adj[101];
bool visited[101];
int infected_count = 0;

void bfs(int x) {
	queue<int> q;
	q.push(x);
	visited[x] = true;

	while (!q.empty()) {
		int s = q.front(); q.pop();
		for (auto u : adj[s]) {
			if (visited[u]) continue;
			visited[u] = true;
			infected_count++;
			q.push(u);
		}
	}
}

int main() {
	FAST_IO;
	int a, b;
	cin >> a >> b;

	for (int i = 0; i < b; i++) {
		int m, n;
		cin >> m >> n;
		adj[m].push_back(n);
		adj[n].push_back(m);
	}

	bfs(1);
	cout << infected_count << '\n';

	return 0;
}