#include <iostream>
#include <stdlib.h>
#include <algorithm>
#include <string>
#include <cstring>
#include <vector>
using namespace std;
int main() {
	vector<int> vt;
	int n, m;
	cin >> n >> m;
	for (int i = 0; i < n; i++) vt.push_back(i + 1);
	cout << "<";
	int pos = m - 1;
	while (1) {
		cout << vt[pos];
		vt.erase(vt.begin() + pos);
		if (vt.size() == 0) {
			break;
		}
		cout << ", ";
		pos = (pos + m - 1) % vt.size();
	}cout << ">" << endl;
	//system("pause");
}
