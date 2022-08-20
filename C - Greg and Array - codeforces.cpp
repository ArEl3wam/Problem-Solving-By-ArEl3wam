#include <bits/stdc++.h>
using namespace std;

#define endl "\n"

#define FASTIO ios_base::sync_with_stdio(false);cin.tie(NULL);


#define ll long long

int main()
{

FASTIO



ll n,m,k; cin >> n >> m >> k;

ll arr[100005];

for(int i=1; i<=n; i++){
    cin >> arr[i];
}

vector<pair<pair<ll,ll>,ll>> v;
ll l,r,d;
for(int i=0; i<m; i++){
    cin >> l >> r >> d;

    v.push_back({{l,r},d});
}


ll pref[100005];

memset(pref,0,sizeof(pref));
while(k--){
    cin >> l >> r;
    pref[l-1]+=1;
    pref[r]-=1;
}

for(int i=1; i<m; i++){
    pref[i]=pref[i-1]+pref[i];
}

for(int i=0; i<v.size(); i++){

    v[i].second*=pref[i];
}

memset(pref,0,sizeof(pref));

for(auto e: v){
    pref[e.first.first]+=e.second;
    pref[e.first.second+1]-=e.second;
}

for(int i=1; i<=n; i++){
    pref[i]+=pref[i-1];
}

for(int i=1; i<=n; i++){
    arr[i]+=pref[i];
    cout << arr[i] << " ";
}


}
