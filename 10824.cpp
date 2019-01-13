#include <iostream>
#include <algorithm>
#include <stdlib.h>
#include <stack>
#include<string.h>
#include <string>
using namespace std;
int main() {
	int a[4];
	for (int i = 0; i < 4; i++)cin >> a[i];
	string temp1 = (to_string(a[0]) + to_string(a[1]));
	string temp2= (to_string(a[2]) + to_string(a[3]));
	cout << stol(temp1)+stol(temp2)<<endl;
	system("pause");
	return 0;
}