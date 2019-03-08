#include<cstdio>
#include<queue>
using namespace std;
int dx[4] = { 0,0,-1,1 };
int dy[4] = { -1,1,0,0 };
int n, m;
int map[1002][1002] = { 0, };
int visited[1002][1002] = { 0, };

int main() {
	scanf("%d%d", &m, &n);
	queue<pair<int, int>> nq;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			scanf("%d", &map[i][j]);
			if(map[i][j]==1) nq.push(make_pair(i, j));
		}
	}
	while (!nq.empty()) {
		auto now = nq.front();
		nq.pop();
		int x = now.first;
		int y = now.second;
		for (int k = 0; k < 4; k++) {
			int nx, ny;
			nx = dx[k] + x;
			ny = dy[k] + y;
			if (nx < 0 || ny < 0 || nx >= n || ny >= m)continue;
			if (map[nx][ny]==0) {
				map[nx][ny] = map[x][y] + 1;
				nq.push(make_pair(nx, ny));
			}
		}
	}
	int mx = -1e9;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (!map[i][j]) {
				printf("-1\n"); 
				return 0;
			}
			if (mx < map[i][j])mx = map[i][j];
		}
	}
	
	printf("%d\n", mx - 1);
	return 0;
}