#include <bits/stdc++.h>
using namespace std;

#define endl "\n"

#define FASTIO ios_base::sync_with_stdio(false);cin.tie(NULL);


#define ll long long


int main()
{

FASTIO

int n,m; cin >> n >> m;
int l,r,w;

set <int> k;

int arr[n+1];

memset(arr,0,sizeof(arr));

for(int i=1; i<=n+1; i++){
    k.insert(i);
}


while(m--){

    cin >> l >> r >> w;
    auto it = k.lower_bound(l);
    while(*it<=r && it!=k.end()){
        if(*it!=w){
            int j=*it;
            arr[*it]=w;

            it++;

            k.erase(j);

        }
        else{
            it++;
        }
    }
}

for(int i=1; i<=n; i++){
    cout << arr[i] << " ";
}


}
