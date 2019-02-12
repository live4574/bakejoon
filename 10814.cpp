#include<iostream>
#include<algorithm>
#include<string>
#include<stdlib.h>
#define MAXNUM 100010
#define fio ios_base::sync_with_stdio(0), cin.tie(0)
using namespace std;
 
struct user{
    int age;
    string name;
    bool operator < (const user & a) const{
        return age < a.age;
    }
};
int main(){
    fio;
    int n;
    user arr[100001];
    cin >> n;
    for (int i=0; i<n; i++) {
        cin >> arr[i].age >> arr[i].name;
    }
     
    stable_sort(arr, arr+n);
     
    for (int i=0; i<n; i++) {
        cout << arr[i].age << ' ' << arr[i].name << '\n';
    }
    system("pause");
    return 0;
}