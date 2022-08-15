#include <bits/stdc++.h>
using namespace std;
#define endl "\n"

#define FASTIO ios_base::sync_with_stdio(false);cin.tie(NULL);

long long fp(int b, int p){
    if(p==0){
        return 1;
    }
    long long ans=fp(b,p/2);
    ans*=ans;
    if(p%2){
        ans*=b;
    }
    return ans;
}

unsigned long long ncr(int n, int r){
    long long ans=1;
    for(int i=1; i<=r; i++){
        ans*=(n-i+1);
        ans/=(i);
    }
    return ans;

}



int main()
{

    FASTIO
//value,n

vector<pair<int , long long>> v;
int sum,limit;

cin >> sum >> limit;


for(int i=1 ; i <= limit; i++){
    int cnt=0;
    while(!(i&(1<<cnt))){
        cnt++;
    }
    v.push_back({fp(2,cnt),i});
}
sort(v.begin(),v.end());

vector<int> ans;

for(int i=v.size()-1; i>=0&&sum!=0; i--){

    if(v[i].first<=sum){
        sum-=v[i].first;
        ans.push_back(v[i].second);
    }

}

if(sum!=0){
    cout << -1;
}
else{
    cout << ans.size() << endl;
    for(auto e:ans){
        cout << e << " ";
    }
}

}
