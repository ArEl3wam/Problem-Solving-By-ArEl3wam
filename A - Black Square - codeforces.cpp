#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
    int arr[4];
    for(int i=0; i<4; i++){
        cin >> arr[i];
    }
    int cnt=0;
    string str;
    cin >> str;
    for(int i=0; i<str.size(); i++){
        int a=str[i]-'1';
        cnt+=arr[a];
    }
    cout << cnt;
    
}
