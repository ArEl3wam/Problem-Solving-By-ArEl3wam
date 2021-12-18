#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
    int n,k,q;
    cin >> n >> k >> q;
    int arr[200005]={0};
    int l,r;
    for(int i=0; i < n; i++){
        cin >> l >> r;
        arr[l]++;
        arr[r+1]--;
    }
    for(int i=1; i<200005; i++){
        arr[i]=arr[i]+arr[i-1];
    }
    for(int i=0; i<200005; i++){
        if(arr[i]<k){
            arr[i]=0;
        }
        else{
            arr[i]=1;
        }
    }
    for(int i=1; i<200005; i++){
        arr[i]+=arr[i-1];
    }
    
    while(q--){
        cin >> l >> r;
        cout << arr[r]-arr[l-1] << endl;
    }
}
