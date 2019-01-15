#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int N;
int n[1000000];
int main() {
	cin >> N;
	vector<pair<int, int>> v(N);
	for (int i = 0; i < N; i++) {
		scanf("%d%d",&v[i].second,&v[i].first);
	}
	sort(v.begin(), v.end());
	for (int i = 0; i < N; i++)printf("%d %d\n", v[i].second,v[i].first);
//	system("pause");
	return 0;
}
