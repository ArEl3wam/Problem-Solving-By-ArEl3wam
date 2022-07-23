#include <bits/stdc++.h>

using namespace std;




int main()
{

int n; cin >> n;
map<int,int> mp;
int arr[n];
for(int i=0; i<n; i++){
    cin >> arr[i];
    mp[arr[i]]++;
}

sort(arr,arr+n);

if((arr[n-1]-arr[0])%2!=0 && mp.size()!=2){
    cout << "NO";
}
else if((arr[n-1]-arr[0])%2!=0 && mp.size()==2){
    cout << "YES";
}
else{
    map<int,int> outmp;
    int diff=(arr[n-1]-arr[0])/2;

    for(int i=0; i<n; i++){
        if(arr[i]<(arr[n-1]-diff)){
            outmp[arr[i]+diff]++;
        }
        else if(arr[i]==(arr[n-1]-diff)){
            outmp[arr[i]]++;
        }
        else{
            outmp[arr[i]-diff]++;
        }
    }
    if(outmp[arr[n-1]-diff]==n){
        cout << "YES";
    }
    else{
        cout <<"NO";
    }
}
}
