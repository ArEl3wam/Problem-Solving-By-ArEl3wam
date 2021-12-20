#include<bits/stdc++.h>
using namespace std;
 
int search (int arr[], int l , int r){
    while(l<=r){
        int mid = (l+r)/2;
        if(arr[mid]<=240){
            l=mid+1;
        }
        if(arr[mid]>240){
            r=mid-1;
        }
    }
    return r;
}
int main(){
    
  int n; cin >> n;
  int k; cin >> k;
  int arr[n+1];
  arr[0]=k;
  for(int i=1; i<=n; i++){
      arr[i]=arr[i-1]+5*i;
  }
  cout << search(arr,0,n);
    
}
