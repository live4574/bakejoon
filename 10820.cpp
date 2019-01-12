#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdlib.h>
#include <algorithm>
#include <string>
#include <cstring>
#include <vector>
using namespace std;
int main() {
	char str[101];
	while (cin.getline(str, 101, '\n')) {
		int a = 0, b = 0, c = 0, d = 0;
		for (int i = 0; i < strlen(str); i++) {
			if (str[i] >= 'a'&&str[i] <= 'z')a++;
			else if (str[i] >= 'A'&&str[i] <= 'Z')b++;
			else if (str[i] >= '0'&&str[i] <= '9')c++;
			else if (str[i] == ' ')d++;
		}
		cout << a << ' ' << b << ' ' << c << ' ' << d << endl;
	}
	system("pause");
}
