#include<bits/stdc++.h>
using namespace std;

int main(){

int t; cin >> t;
unsigned long long a;
while(t--){
    cin >> a;
    if(a%2!=0){
        cout <<"YES"<< endl;
    }
    else{
        while(a%2==0){
            a/=2;
        }
        if(a==1){
            cout << "NO" << endl;
        }
        else{
            cout << "YES"<< endl;
        }
    }
}
  
    
}
