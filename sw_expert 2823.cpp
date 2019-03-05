#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include <set>
using namespace std;
int T;
int map[5][5] = { 0, };
int ans = 0;
set<int> p;
int dx[4] = { 0,0,1,-1 };
int dy[4] = { 1,-1,0,0 };

void dfs(int num, int i, int j, int ct) {
	if (ct == 7) {
		p.insert(num);
		return;
	}
	for (int k = 0; k < 4; k++) {
		int ni, nj;
		ni = i + dx[k];
		nj = j + dy[k];
		if (ni < 0 || ni >= 4 || nj < 0 || nj >= 4) continue;
		dfs(num * 10 + map[ni][nj], ni, nj, ct + 1);
	}
}
int main() {
	scanf("%d", &T);
	for (int t = 0; t < T; t++) {
		p.clear();
		for (int i = 0; i < 4; i++) {
			for (int j = 0; j < 4; j++) {
				scanf("%d", &map[i][j]);
			}
		}
		for (int i = 0; i < 4; i++) {
			for (int j = 0; j < 4; j++) {
				dfs(map[i][j], i, j, 1);
			}
		}
		ans = p.size();
		printf("#%d %d\n", t + 1, ans);
	}
	system("pause");
	return 0;
}