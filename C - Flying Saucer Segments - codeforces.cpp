#include <bits/stdc++.h>
using namespace std;

#define endl "\n"

#define FASTIO ios_base::sync_with_stdio(false);cin.tie(NULL);


#define ll long long

int mod;

long long fp(int b , int p){

    if(p==0){
        return 1;
    }
    long long ans = fp(b,p/2)%mod;
    ans = ( ( ans % mod ) * ( ans % mod ) ) % mod;
    if(p%2){
        ans = ((ans % mod) * (b%mod)) % mod;
    }
    return ans % mod;


}

int main()
{

FASTIO



int n;

cin >> n >> mod;

long long ans = fp(3,n) -1 ;

if(ans<0){
    ans +=mod;
}
cout << ans;

}
