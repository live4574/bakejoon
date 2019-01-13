#include <iostream>
#include <stdlib.h>
#include <algorithm>
#include <stack>
#include <string>
#include <cstring>
using namespace std;

stack<char>st;
int main() {
	int n;
	char str[100000];
	cin >> str;
	int count = 0;
	int temp = 0;
	for (int i = 0; i < strlen(str); i++) {
		if (str[i] == '(') {
			//st.push(str[i]);
			temp++;
		}
		else {
			if (str[i - 1] == '(') {
				//st.pop();
				temp--;
				//count +=st.size();
				count += temp;
				//cout << i <<" "<<count<< endl;
			}
			else {
				count += 1;
				//st.pop();
				temp--;
				//cout << i << " " << count << endl;
			}
		}
	}
	cout << count << endl;
//	system("pause");
}
