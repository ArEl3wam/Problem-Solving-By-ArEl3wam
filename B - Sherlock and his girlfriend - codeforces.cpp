#include<bits/stdc++.h>
using namespace std;

bool primes[100005];

void sieve(int n){
    memset(primes,1,sizeof(primes));
    primes[0]=false;
    primes[1]=false;
    for(int i=2; i*i<=n; i++){
        if(primes[i]){
            for(int j=i*i; j<=n; j+=i){
                primes[j]=false;
            }
        }
    }
}

int main(){
    int n; cin >> n;
    sieve(n+2);
    if(n>2){
        cout << 2 << endl;
    }
    else{
        cout << 1 << endl;
    }
    for(int i=2; i<n+2; i++){
        if(primes[i]){
            cout << "1 "; 
        }
        else{
            cout << "2 ";
        }
    } 
    
}
