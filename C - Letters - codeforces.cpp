#include <bits/stdc++.h>
using namespace std;

long long solution1(long long arr[],long long a,long long l , long long r){
    while (l<=r){
        long long mid = (l+r)/2;
        if(arr[mid]<a){
            l=mid+1;
        }
        if(arr[mid]>=a){
            r=mid-1;
        }
    }
    return l;
}


int main(){
    long long n; cin >> n;
    long long q; cin >> q;
    long long arr[n+1]={0};
    for(long long i=1; i <= n; i++){
        cin >> arr[i];
        arr[i]+=arr[i-1];
    }
    
    long long a;
    while(q--){
        cin >> a;
        cout << solution1(arr,a,1,n)<< " " << a-arr[solution1(arr,a,1,n)-1] << endl;
    }
}
