#include <bits/stdc++.h>
using namespace std;

int main()
{  
    int n,c;
    cin >> n>>c;
    int arr[n+1];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    int sum=0;
    for(int i=0; i<n-1; i++){
       if((arr[i]-arr[i+1])>sum){
           sum=arr[i]-arr[i+1];
       }
    }
    if(sum-c>0){
    cout << sum-c;
    }
    else {
        cout <<0;
    }
}
