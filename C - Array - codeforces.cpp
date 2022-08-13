#include <bits/stdc++.h>
using namespace std;
#define endl "\n"

#define FASTIO ios_base::sync_with_stdio(false);cin.tie(NULL);

const int N=2e5+5,mod=1e9+7;
int factorial[N];
int fp(int b,int p){
    if(p==0){
        return 1;
    }
    long long ans = fp(b,p/2)%mod;
    ans = (ans%mod)*(ans%mod)%mod ;
    if(p%2){
        return ((ans%mod)*(b%mod))%mod;
    }
    else{
        return ans;
    }
}

int ncr(int n,int r){
    return 1LL* factorial[n] * fp(1LL*factorial[r]*factorial[n-r] % mod,mod-2)%mod;
}
int main()
{

FASTIO

int n; cin >> n;
factorial[0]=1;
for(int i=1; i<=2*n; i++){
    factorial[i]=1LL*i*factorial[i-1]%mod;
}

int ans = (2*ncr(2*n-1,n-1)- n)%mod;
if(ans<0){
    ans+=mod;
}
cout << ans;
}
