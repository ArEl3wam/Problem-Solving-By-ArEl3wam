#include <bits/stdc++.h>
using namespace std;

#define endl "\n"

#define FASTIO ios_base::sync_with_stdio(false);cin.tie(NULL);


#define ll long long


int n,m;



int dfs(int i,int c, int cats[], vector<vector<int>> &v , bool visi[]){
    visi[i]=1;
    c-=cats[i];

    if(c<0){
        return 0;
    }

    if(!cats[i]){
        c=m;
    }
    int ans=0;
    bool leaf=1;
    for(auto e : v[i]){
        if(!visi[e]){
            leaf=0;
            ans+=dfs(e,c,cats,v,visi);
        }
    }
    if(leaf){
        return 1;
    }
    return ans;
}



int main()
{

FASTIO


cin >> n >> m;

int cats[n+1];

for(int i=1; i<=n; i++){
    cin >> cats[i];
}

vector<vector<int>> v(n+1);
bool visi[n+1]={false};
int a,b;
for(int i=0; i<n-1; i++){
    cin >> a >> b;
    v[a].push_back(b);
    v[b].push_back(a);
}


int ans =0;


    ans+=dfs(1,m,cats,v,visi);


cout << ans;
}
