#include <bits/stdc++.h>
#define ll long long int
using namespace std;


int main()
{
    ll n,m;
    cin >> n >> m;
    ll a,b,dx,dy;
    cin >> a >> b;
    ll t;
    cin >> t;
    ll steps=0;
    while(t--){
        ll f1,f2;
        cin >>dx >>dy;
        if(dx>0){
            f1=(n-a)/dx;
        }
        if(dx==0){
            f1=INT_MAX;
        }
        if(dx<0){
            f1=(a-1)/(-1*dx);
        }
        if(dy>0){
            f2=(m-b)/dy;
        }
        if(dy==0){
            f2=INT_MAX;
        }
        if(dy<0){
            f2=(b-1)/(-1*dy);
        }
        if(f1==f2 && f1==INT_MAX){
            f1=0;
            f2=0;
        }
        f1=min(f1,f2);

        steps+=f1;
        a+=f1*dx;
        b+=f1*dy;


    }
    cout << steps;

}
