#include <iostream>
#include <stdlib.h>
#include <algorithm>
#include <list>
#include <string>
#include <cstring>
using namespace std;
int main() {
	list<char> lst;
	string str;
	cin >> str;
	for (int i = 0; i < str.size(); i++) {
		lst.push_back(str[i]);
	}
	int n = 0;
	cin >> n;
	char c;
	list<char>::iterator it = lst.end();
	for (int i = 0; i < n; i++) {
		cin >> c;
		if (c == 'P') {
			char x;
			cin >> x;
			lst.insert(it, x);
		}
		else if (c == 'L') {
			if (it != lst.begin()) {
				--it;
			}
		}
		else if (c == 'D') {
			if (it != lst.end()) {
				++it;
			}
		}
		else {
			if (it != lst.begin()) {
				--it;
				it = lst.erase(it);

			}
		}
	}
	for (list<char>::iterator iit = lst.begin(); iit != lst.end(); iit++) {
		cout << *iit;
	}
	//system("pause");
}
