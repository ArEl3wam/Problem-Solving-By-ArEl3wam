#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n,m; cin >> n >> m;

    string matrix[n];
    int arr[n];
    memset(arr,0,sizeof(arr));

    for(int i=0 ;i<n; i++){
        cin >> matrix[i];
    }
    vector<pair<int,int>> dwarfs;
    vector<pair<int,int>> candies;

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(matrix[i][j]=='G'){
                dwarfs.push_back(make_pair(i,j));
            }
            if(matrix[i][j]=='S'){
                candies.push_back(make_pair(i,j));
            }
        }
    }
    map<int,int> mp;
    int cnt=0;
    for(int i=0; i<dwarfs.size(); i++){
        if(dwarfs[i].second<candies[i].second){
            mp[candies[i].second-dwarfs[i].second]++;
            cnt++;
        }
    }
    if(cnt<n){
        cout << -1;
    }else{
        cout << mp.size();
    }

}
