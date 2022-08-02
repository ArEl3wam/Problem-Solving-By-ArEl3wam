#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n; cin >> n;
    int k; cin >> k;
    int arr[n];
    bool found = false;
    int indx;
    for(int i=0; i<n; i++){
        cin>> arr[i];
        if(arr[i]<0&&k){
            arr[i]=abs(arr[i]);
            k--;
        }
    }
    sort(arr,arr+n);
    if(k%2!=0){
        arr[0]=arr[0]*-1;
    }
    long long sum=0;
    for(int i=0; i<n; i++){
        sum+=arr[i];
    }
    cout << sum;

}
