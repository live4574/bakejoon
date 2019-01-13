#include <iostream>
#include <algorithm>
#include <stdlib.h>
#include <stack>
#include<string.h>
using namespace std;
int main() {
	char str[101];
	cin.getline(str,101, '\n');
	for (int i = 0; i < strlen(str); i++) {
		if (str[i] >= 'a'&& str[i] <= 'z'){
			if((str[i] + 13) <= 'z')str[i] = (str[i] + 13);
			else str[i] = 'a'+(12 - ('z' - str[i]));
		}
		else if (str[i] <= 'Z' && str[i] >= 'A') {
			if((str[i] + 13 )<= 'Z')str[i] = (str[i] + 13);
			else str[i] = 'A' + (12 - ('Z' - str[i]));
		}
	}
	cout << str;
	//system("pause");
	return 0;
}