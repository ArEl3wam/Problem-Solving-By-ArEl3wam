#include <bits/stdc++.h>
using namespace std;
#define endl "\n"

#define FASTIO ios_base::sync_with_stdio(false);cin.tie(NULL);


set<int> primes;

void pri(int n){
    for(int i=2; i*i <=n; i++){
        while(n%i==0){
            n/=i;
        }
        primes.insert(i);
    }
    if(n>1){
        primes.insert(n);
    }
}


int main()
{

    FASTIO
//value,n

long long a,b;
cin >> a >> b;

pri(a);
pri(b);

for(auto e: primes){
    while(a%e==0 && b%e==0){
        a/=e;
        b/=e;
    }
}

if(abs(a-b)==1){
    cout << "Equal";
}
else if(a>b){
    cout << "Masha";
}
else{
    cout << "Dasha";
}

}
