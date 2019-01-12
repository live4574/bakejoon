#include <iostream>
#include <stdlib.h>
#include <algorithm>
#include <string>
#include <cstring>
#include <vector>
using namespace std;
int main() {
	char str[101];
	int ap[27] = { 0, };
	cin >> str;
	for (int i = 0; i < strlen(str); i++) {
		ap[str[i] - 'a']++;
	}
	for (int i = 0; i < 26; i++) cout << ap[i] << " ";
	//system("pause");
}
