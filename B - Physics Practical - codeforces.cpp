#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    freopen("input.txt","r",stdin);
    freopen("output.txt" ,"w" , stdout);
    int n; cin >> n;

    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    sort(arr,arr+n);
    int mini=INT_MAX;
    for(int i=0; i<n; i++){
        int x=upper_bound(arr,arr+n,arr[i]*2)-arr;
        mini=min(mini,i+n-x);
    }
    cout << mini;


}
