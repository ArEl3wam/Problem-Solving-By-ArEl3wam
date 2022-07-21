#include <bits/stdc++.h>
 
using namespace std;
 
 
 
int main()
{
    int n,m,x; cin >> n >> m >> x;
 
    char arr[n][m];
    vector<pair<int,int>> shifts;
    map<char,int> mp;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin >> arr[i][j];
            if(arr[i][j]=='S'){
                shifts.push_back(make_pair(i,j));
            }
        }
    }
 
 
 
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(mp[arr[i][j]]==0 && arr[i][j]!='S'){
                mp[arr[i][j]]+=2;
                if(shifts.size()){
                    mp[toupper(arr[i][j])]++;
                }
            }
        }
    }
 
 
    for(auto e:shifts){
        for(int i=0;i<n; i++){
            for(int j=0; j<m; j++){
                if(arr[i][j]=='S'){
                    continue;
                }
 
                if(sqrt((i-e.first)*(i-e.first) + (j-e.second)*(j-e.second)) <=x){
                    mp[toupper(arr[i][j])]++;
                }
            }
        }
    }
 
 
 
    int q; cin >> q;
    char dummy;
    int cnt=0;
    bool nothere=false;
    while(q--){
        cin >> dummy;
        if(mp[dummy]==1){
            cnt++;
        }
        if(mp[dummy]==0){
            nothere=true;
        }
 
    }
    if(nothere){
        cout << -1;
    }
    else{
        cout << cnt;
    }
 
 
 
}
