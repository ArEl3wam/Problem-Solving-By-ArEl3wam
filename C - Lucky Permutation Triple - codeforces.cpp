#include <bits/stdc++.h>
using namespace std;
#define endl "\n"

#define FASTIO ios_base::sync_with_stdio(false);cin.tie(NULL);


int main()
{

FASTIO

int n; cin >> n;
if(n%2==0){
    cout << -1;
}
else{
    int arr1[n],arr2[n],out[n];
    for(int i=0; i<n; i++){
        arr1[i]=i;
        arr2[i]=i;
        out[i]=(arr1[i]+arr2[i])%n;
    }
    for(int i=0; i<n; i++){
        cout << arr1[i] << " ";
    }
    cout << endl;
    for(int i=0; i<n; i++){
        cout << arr2[i] << " ";
    }
    cout << endl;
    for(int i=0; i<n; i++){
        cout << out[i] << " ";
    }
}

}
