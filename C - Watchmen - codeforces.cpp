#include <bits/stdc++.h>
using namespace std;
#define endl "\n"

#define FASTIO ios_base::sync_with_stdio(false);cin.tie(NULL);


int main()
{

FASTIO

int n; cin >> n;
map<long long,long long> x;
map<long long,long long> y;
map<pair<long long,long long>,long long> pairs;

int a,b;
while(n--){
    cin >> a >> b;
    x[a]++;
    y[b]++;
    pairs[{a,b}]++;
}
long long cnt=0;
for(auto e:x){
    if(e.second>=2){
        cnt+=(e.second*(e.second-1))/2;
    }
}
for(auto e:y){
    if(e.second>=2){
        cnt+=(e.second*(e.second-1))/2;
    }
}
for(auto e:pairs){
    if(e.second>=2){
        cnt-=(e.second*(e.second-1))/2;
    }
}
cout << cnt;
}
