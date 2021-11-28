#include<bits/stdc++.h>
using namespace std;

int main (){

    string s; cin >> s;
    int m; cin >> m;
    int l,r;
    int arr[s.size()+1];
    arr[0]=0;
    for(int i=1; i<s.size(); i++){
        if (s[i] == s[i-1]){
            arr[i]=arr[i-1]+1;
        }
        else{
            arr[i]=arr[i-1];
        }
    }
    while(m--){
        cin >> l >> r;
        cout << arr[r-1]-arr[l-1]<<endl;
    }
}
