#include <bits/stdc++.h>
using namespace std;
#define endl "\n"

#define FASTIO ios_base::sync_with_stdio(false);cin.tie(NULL);


int main()
{

FASTIO

int n,m; cin >> n >> m;
int cnt=0;
while(n!=m){
    if(m>n){
        if(m%2==0){
            m/=2;
            cnt++;
        }
        else{
            m++;
            cnt++;
        }
    }
    else{
        cnt+=(abs(m-n));
        n=m;
    }
}
cout << cnt;


}
