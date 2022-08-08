#include <bits/stdc++.h>
using namespace std;
#define endl "\n"

#define FASTIO ios_base::sync_with_stdio(false);cin.tie(NULL);

void dfs(vector<vector<int>> &graph,int i, bool vis[]){

    vis[i]=1;
    for(auto e:graph[i]){
        if(!vis[e]){
            dfs(graph,e,vis);
        }
    }

}

int main()
{

FASTIO

int n,m;
cin>> n >> m;

vector<vector<int>> graph(n+1);
vector<vector<int>> lang(m+1);
int num;
int zero=0;
for(int i=1; i<=n; i++){
    cin >> num;
    if(num==0){
        zero++;
    }
    int l;
    while(num--){
        cin >> l;
        lang[l].push_back(i);
    }
}

for(int i=1; i<=m; i++){
    for(int j=0; j<lang[i].size(); j++){
        for(int k=j+1; k<lang[i].size(); k++){
            graph[lang[i][j]].push_back(lang[i][k]);
            graph[lang[i][k]].push_back(lang[i][j]);
        }
    }
}


bool vis[n+1]={false};
int cnt=-1;
for(int i=1; i<=n; i++){
    if(!vis[i]){
        cnt++;
        dfs(graph,i,vis);
    }
}

if(zero==n){
    cnt++;
}
cout << cnt;

}
