#include <bits/stdc++.h>
using namespace std;
vector<long long> v;
long long mem[1000001]={0};
long long divisors(long long n){
    if(mem[n]!=0){
        return mem[n];
    }
    long long cnt=0;
    for(int i=1; i*i<=n; i++){
        if(n%i==0){
            if(n/i==i){
                cnt++;
            }
            else{
                cnt+=2;
            }
        }
    }
    mem[n]=cnt;
    return cnt;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a,b,c;
    cin >> a >> b >> c;
    long long sum=0;
    for(int i=1; i<=a; i++){
        for(int j=1; j<=b; j++){
            for(int k=1; k<=c; k++){
                sum+=divisors(i*j*k);
            }
        }
    }

    cout << sum%1073741824;

}
