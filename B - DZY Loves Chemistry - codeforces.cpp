#include <bits/stdc++.h>
using namespace std;
#define endl "\n"

#define FASTIO ios_base::sync_with_stdio(false);cin.tie(NULL);

dfs(vector<vector<int>> &graph, int i, bool visited[]){
visited[i]=1;
for(auto e:graph[i]){
    if(!visited[e]){
        dfs(graph,e,visited);
    }
}

}

int main()
{

FASTIO

int n,m;
cin>> n >> m;
vector<vector<int>> graph(n+1);

int danger=1;
int a,b;
while(m--){
    cin >>a >>b;
    graph[a].push_back(b);
    graph[b].push_back(a);
}
bool visited[n+1]={false};
int cnt=0;
for(int i=1; i<=n; i++){
    if(!visited[i]){
        dfs(graph,i,visited);
        cnt++;
    }
}
cout << (long long int)pow(2,n-cnt);




}
