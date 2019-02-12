#include <iostream>
#include <stdlib.h>
#include <algorithm>
using namespace std;

int num[10001];
int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int temp;
		scanf("%d",&temp);
		num[temp]++;
	}
	for (int i = 1; i < 10001; i++) {
		for (int j = 0; j < num[i]; j++) {
			printf("%d\n",i);
		}
	}
	system("pause");
	return 0;
}