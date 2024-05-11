#define GS 400040
vector<int> graph[GS];
bitset <GS> vis;

void bfs(int curr) {
	queue<int> q;
	q.push(curr);
	while (q.size()) {
		curr = q.front(); q.pop();
		if (!q[curr]) {
			q[curr] = 1;
			for (int h : graph[curr]) q.push(h);
		}
	}
}

void dfs(int curr) {
	stack<int> s;
	s.push(curr);
	while (s.size()){
		curr = s.top(); s.pop();
		if (!vis[curr]) {
			vis[curr] = 1;
			for (int h : graph[curr]) s.push(h);
		}
	}
}