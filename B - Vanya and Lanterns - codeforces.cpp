#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    long long q; cin >> q;
    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    sort(arr,arr+n);
    float ans=0;
    float first=arr[0]-0;
    float last= q-arr[n-1];
    ans=max(first,last);
    float f;
    for(int i=1; i<n; i++){
        f=(float)arr[i]-(float)arr[i-1];
        f/=2;
        if(f>ans){
            ans=f;
        }
    }
    cout << setprecision(10)<<fixed << ans;
}
