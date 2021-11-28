#include<bits/stdc++.h>
using namespace std;

int main (){

    int n; cin >> n;
    int k; cin >> k;
    int arr[n+1]={0};
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    int sum=0;
    for(int i=0; i<k; i++){
        sum+=arr[i];
    }
    int OldSum=sum;
    int out =0;
    for(int i=1; i<n+1-k; i++){
        sum-=arr[i-1];
        sum+=arr[i-1+k];
        if(sum<OldSum){
            OldSum = sum;
            out =i;
        }
    }
    cout << out+1 ;
}
