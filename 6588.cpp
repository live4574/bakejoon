#include <iostream>
#include <stdlib.h>
#include <math.h>
using namespace std;
int notPrime[1000001] = { 0, };

int main() {
	notPrime[2] = 0;
	for (int i = 2; i < 1e6; i++) {
		if (!notPrime[i]){
		for (int j = 2*i; j < 1e6; j += i) {
				notPrime[j] = 1;
			}
		}
	}
	int n;
	while (1) {
		scanf("%d",&n);
		if (n == 0) {
			break;
		}
		int ans1, ans2;
		for (int i = 2; i<n; i++) {
			if (!notPrime[i]) {
				if (!notPrime[n-i]) {
					ans1 = i, ans2 = n - i;
					printf("%d = %d + %d\n",n,ans1,ans2);
					break;
				}
			}
		}
	}
//	system("pause");
	return 0;
}