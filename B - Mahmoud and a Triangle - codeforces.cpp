#include <bits/stdc++.h>

using namespace std;


int main()
{
    int n; cin >> n;

    long long arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    sort(arr,arr+n);


    bool tri=false;

    for(int i=n-1; i>=2; i--){
        if(arr[i]+arr[i-1]>arr[i-2] && arr[i-2]+arr[i-1]>arr[i] && arr[i]+arr[i-2]>arr[i-1]){
            tri=true;
            break;
        }
    }

    if(tri){
        cout << "YES";
    }
    else{
        cout << "NO";
    }



}
