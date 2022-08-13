#include <bits/stdc++.h>
using namespace std;
#define endl "\n"

#define FASTIO ios_base::sync_with_stdio(false);cin.tie(NULL);

int ara[6]={0},arb[6]={0};

void primes(int &a,int &b){

    while(a%5==0){
        a/=5;
        ara[5]++;
    }
    while(a%3==0){
        a/=3;
        ara[3]++;
    }
    while(a%2==0){
        a/=2;
        ara[2]++;
    }

    while(b%5==0){
        b/=5;
        arb[5]++;
    }
    while(b%3==0){
        b/=3;
        arb[3]++;
    }
    while(b%2==0){
        b/=2;
        arb[2]++;
    }

}
int main()
{

    FASTIO

    int a,b;
    cin >> a >> b;

    primes(a,b);
    if(a!=b){
        cout << -1;
    }
    else{
        cout << abs(ara[5]-arb[5]) + abs(ara[3]-arb[3]) + abs(ara[2]-arb[2]);
    }

}
