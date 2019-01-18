#include <iostream>
#include <algorithm>
#include <stdlib.h>
#include <map>
#include <vector>
using namespace std;
typedef long long lld;
int main(){
	int n;
	scanf("%d", &n);
	map<lld, int> m;
	for (int i = 0; i<n; ++i) {
		lld x;
		scanf("%lld", &x);
		if (m.count(x))m[x]++;
		else m[x] = 1;
	}
	vector<pair<int, lld>> v;
	for (map<lld, int>::iterator it = m.begin(); it != m.end(); ++it) {
		v.push_back(make_pair(-it->second, it->first));
	}
	sort(v.begin(), v.end());
	printf("%lld",v[0].second);
	system("pause");
	return 0;
}