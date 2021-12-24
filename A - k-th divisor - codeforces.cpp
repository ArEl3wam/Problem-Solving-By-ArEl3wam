#include<bits/stdc++.h>
using namespace std;

vector<long long> primeFactors(long long n){
    vector<long long> v;
    for(long long i=1; i*i<=n; i++){
        if(n%i==0){
            v.push_back(i);
            if(i!= n/i){
                v.push_back(n/i);
            }
        }
    }
    sort(v.begin(),v.end());
    return v;
}

int main(){
    
    long long n,k;
    cin >> n >> k;
    
    vector<long long> test=primeFactors(n);
    if(k>test.size()){
        cout << -1;
    }
    else{
        cout << test[k-1];
    }
}
