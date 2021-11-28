#include<bits/stdc++.h>
using namespace std;
 
int main (){
    int arr[26]={0};
    
    int n; cin >> n;
    string s; cin >>s;
    
    for(int i=0; i<n; i++){
        arr[s[i]-'a']++;
    }
    int cnt=0;
    for(int i=0; i<26; i++){
        if(arr[i]>1){
            cnt+=arr[i]-1;
        }
    }
    if(n>26){
        cout << -1;
    }
    else{
    cout << cnt;
    }
}
