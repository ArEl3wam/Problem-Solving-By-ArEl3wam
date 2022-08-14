#include <bits/stdc++.h>
using namespace std;
#define endl "\n"

#define FASTIO ios_base::sync_with_stdio(false);cin.tie(NULL);



void divisors(long long n, vector<long long> &d){
    for(long long i=1; i*i<=n; i++){
        if(n%i==0){
            if(n/i==i){
                d.push_back(i);

            }
            else{
                d.push_back(i);
                d.push_back(n/i);

            }
        }
    }
}
int main()
{

    FASTIO

    long long n; cin >> n;
    vector<long long> d;
    divisors(n,d);

    bool state = true;
    sort(d.begin(),d.end());
    long long ans=d[0];

    for(long long i=d.size()-1; i>0; i--){
        state=true;
        for(long long j=2; j*j<=d[i]; j++){
            if(d[i]%(j*j)==0){
                state=false;
                break;
            }
        }
        if(state){
            ans=d[i];
            break;
        }
    }
    cout << ans;


}
