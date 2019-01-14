#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <iostream>
#include <algorithm>
using namespace std;
int N;
int n[1000000];
int main() {
	scanf("%d", &N);
	for (int i = 0; i < N; i++) {
		scanf("%d", &n[i]);
	}
	sort(n,n + N);
	for (int i = 0; i < N; i++)printf("%d\n", n[i]);
	system("pause");
	return 0;
}
