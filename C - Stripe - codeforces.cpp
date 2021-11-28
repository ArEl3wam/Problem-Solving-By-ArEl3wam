#include<bits/stdc++.h>
using namespace std;

int main (){

    int n; cin >> n;
    int arr[n+1];
    int s1=0,s2=0;
    for(int i=0; i<n; i++){
        cin >> arr[i];
        s1+=arr[i];
    }
    int cnt =0;
    for(int i=0; i<n-1; i++){
        s1-=arr[i];
        s2+=arr[i];
        if(s1==s2){
            cnt++;
        }
    }
    cout << cnt;
}
