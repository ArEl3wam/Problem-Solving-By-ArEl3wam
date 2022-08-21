#include <bits/stdc++.h>
using namespace std;

#define endl "\n"

#define FASTIO ios_base::sync_with_stdio(false);cin.tie(NULL);


#define ll long long

long long fp(int b, int p){
    if(p==0){
        return 1;
    }
    long long ans = fp(b,p/2);
    ans*=ans;
    if(p%2){
        ans*=b;
    }
    return ans;
}


set<int> p;

void primes(int n){
    for(int i=2; i*i<=n ; i ++){
    if(n%i==0){
        while(n%i==0){
            n/=i;
        }
        p.insert(i);
    }

    }
    if(n>1){
        p.insert(n);
    }

}

int main()
{

FASTIO


int n; cin >> n;

for(int i=2; i<=n; i++){
    primes(i);
}


if(n==1){
    cout << 0;
}
else if(n==2){
    cout << 1 << endl << 2;
}
else if (n==2){
    cout << 2 << endl << 2 << " " << 3;
}
else{
    set <int> temp;
    // 2 3 5 7
    for(auto e:p){
        int i=2;

        while(fp(e,i)<=n){
            temp.insert(fp(e,i));
            i++;
        }
    }
    for(auto e : temp){
        p.insert(e);
    }
    cout << p.size() << endl;
    for(auto e: p){
        cout << e << " ";
    }
}

}
