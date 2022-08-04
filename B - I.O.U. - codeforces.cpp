#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n; cin >> n;
    int q; cin >> q;
    int a,b,val;
    int arr[n+1];
    memset(arr,0,sizeof(arr));
    while(q--){
        cin >> a >> b >> val;
        arr[a-1]-=val;
        arr[b-1]+=val;
    }
    int out=0;
    for(int i=0; i<n; i++){
        if(arr[i]<0){
            out +=abs(arr[i]);
        }
    }
    cout << out;


}
