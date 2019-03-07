#include<cstdio>
int dx[4] = { 1,0,-1,0 };
int dy[4] = { 0,1,0,-1 };
int map[501][501] = { 0, };
int visited[501][501] = { 0, };

int bfs(int a, int b) {
	int ct = 0;
	for (int i = 0; i < 4; i++) {
		int ni, nj;
		ni = a + dx[i];
		nj = b + dy[i];
		if (!map[ni][nj] || visited[ni][nj])continue;
		ct++;
		visited[ni][nj] = 1;
		ct += bfs(ni, nj);
	}
	return ct;
}
int main() {
	int n, m;
	scanf("%d%d", &n, &m);
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			scanf("%d", &map[i][j]);
		}
	}
	int ct = 0; //그림크기
	int num = 0;//그림수
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (!visited[i][j] && map[i][j]) {
				int k = bfs(i, j);
				ct = k > ct ? k : ct;
				num++;
			}
		}
	}
	if (num >= 1 && ct == 0) ct = 1;
	printf("%d\n%d", num, ct);
}