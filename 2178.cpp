#define _CRT_SECURE_NO_WARNINGS
#include<cstdio>
#include<stdlib.h>
#include <queue>
using namespace std;
int dx[4] = { 0,0,-1,1 };
int dy[4] = { -1,1,0,0 };
int N, M;
int map[102][102] = { 0, };
int visited[102][102] = { 0, };
int dist[102][102] = { 0, };
void bfs(int x, int y) {
	queue<pair<int, int>>nq;
	nq.push(make_pair(x, y));
	while (!nq.empty()) {
		x = nq.front().first;
		y = nq.front().second;
		if (x == N - 1 && y == M - 1) break;
		nq.pop();
		for (int k = 0; k < 4; k++) {
			int nx = x + dx[k];
			int ny = y + dy[k];
			if ((nx >= 0) && (ny >= 0) && (visited[nx][ny] == 0) && map[nx][ny] == 1 && nx < N && ny < M) {
				visited[nx][ny] = 1;
				dist[nx][ny] = dist[x][y] + 1;
				nq.push(make_pair(nx, ny));
			}
		}
	}
}
int main() {
	scanf("%d%d", &N, &M);
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			scanf("%1d", &map[i][j]);
		}
	}
	visited[0][0] = 1;
	dist[0][0] = 1;
	bfs(0, 0);
	printf("%d\n", dist[N - 1][M - 1]);

}