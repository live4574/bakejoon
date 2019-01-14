#include <iostream>
#include <stdlib.h>
#include <algorithm>
#include <string>
using namespace std;
int main() {
	int n;
	string s;
	cin >> s;
	string a[1000];
	for (int i = 0; i < s.size(); i++) {
		a[i] = s.substr(i,s.size());
	}
	sort(&a[0], &a[0 + s.size()]);
	for (int i = 0; i < s.size(); i++) cout << a[i] << endl;
	system("pause");
	return 0;
}