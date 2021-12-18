#include <bits/stdc++.h>
using namespace std;
 
int search(int arr[],int x,int l,int r){
    while(l<=r){
        int mid = (l+r)/2;
        if(arr[mid]>=x){
            r=mid-1;
        }
        if(arr[mid]<x){
            l=mid+1;
        }
    }
    return l;
}
 
int main(){
    int n; cin >> n;
    int arr[n+1]={0};
    int a;
    for(int i=1; i<=n; i++){
        cin >> arr[i];
        arr[i]+=arr[i-1];
    }
    int q; cin >> q;
    while (q--){
        cin >> a;
        cout << search(arr,a,1,n) << endl;
    }
}
