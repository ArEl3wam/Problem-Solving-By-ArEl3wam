#include <bits/stdc++.h>
using namespace std;
#define endl "\n"

#define FASTIO ios_base::sync_with_stdio(false);cin.tie(NULL);



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



    unsigned long long n,m,t; cin >> n >> m >> t;



    long long ans=0;
    for(int i=0; i<=t-5; i++){

        ans+=(ncr(n,4+i)*ncr(m,t-4-i));
    }
    cout << ans;


}
