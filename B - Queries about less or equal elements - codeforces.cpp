#include <bits/stdc++.h>
using namespace std;

int solution(int arr[],int a,int l , int r){
    while (l<=r){
        int mid = (l+r)/2;
        if(arr[mid]<=a){
            l=mid+1;
        }
        if(arr[mid]>a){
            r=mid-1;
        }
    }
    return r+1;
}

int main(){
    int n; cin >> n;
    int q; cin >> q;
    int arr[n];
    for(int i=0; i < n; i++){
        cin >> arr[i];
    }
    sort(arr,arr+n);
    
    int a;
    while(q--){
        cin >> a;
        cout << solution(arr,a,0,n-1) << endl;
    }
}
