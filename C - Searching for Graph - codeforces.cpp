#include <bits/stdc++.h>
using namespace std;

#define endl "\n"

#define FASTIO ios_base::sync_with_stdio(false);cin.tie(NULL);


#define ll long long

int main()
{

FASTIO



int t; cin >> t;

while(t--){

    int n,p; cin >> n >>  p;

    bool arr[n+1][n+1];

    memset(arr,false,sizeof(arr));

    vector<pair<int,int>> v;

    for(int i=0; i<=n; i++){
        arr[i][i]=true;
    }
    for(int i=1; i<=n; i++){
        for(int j=i; j<=n; j++){
            if(!arr[i][j]){
                v.push_back({i,j});
                arr[i][j]=1;
                arr[j][i]=1;
            }

        }
    }
    for(int i=0; i<2*n+p; i++){
        cout << v[i].first << " " << v[i].second << endl;
    }
}


}
