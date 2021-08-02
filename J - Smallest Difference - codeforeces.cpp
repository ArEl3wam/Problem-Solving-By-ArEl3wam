#include <bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >>n;
        int arr[n+1];
        int freq[10001]= {0};
        for(int i = 0; i<n; i++){
            cin >> arr[i];
        }
        for(int i = 0; i<n; i++){
            int a = arr[i];
            freq[a]+=1;
        }
        int ans=0;
        for(int i=0; i<10000; i++){
            ans = max(freq[i]+freq[i+1]  , ans);
        }
        cout << ans << endl;
    } 
}  


