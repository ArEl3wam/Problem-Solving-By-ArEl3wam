#include <bits/stdc++.h>
using namespace std;
 
 
int main() {
    int t; cin >> t;
    long long a,b; 
    while (t--){
        cin >> a >> b;
        int cnt=0;
        
        if(a>b){
            swap(a,b);
        }
        
        while((b/8)%a==0 && b%8==0){
            cnt++;
            b/=8;
        }
        while((b/4)%a==0 && b%4==0){
            cnt++;
            b/=4;
        }
        while((b/2)%a==0 && b%2==0){
            cnt++;
            b/=2;
        }
        if(a==b){
            cout << cnt << endl;
        }
        else{
            cout << -1 << endl;
        }
        
    }
}
