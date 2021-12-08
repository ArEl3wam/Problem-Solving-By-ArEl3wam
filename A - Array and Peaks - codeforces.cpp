#include <bits/stdc++.h>
using namespace std;
 
 
int main() {
    int t; cin >>t;
    int a,b;
    while(t--){
        cin >> a >> b;
        if(ceil((float)a/2)-1 <b){
            cout << -1 << endl;
        }
        else{
            int l=2,r=a,peaks=b;
            cout << 1 << " ";
            while(peaks--){
                cout << r-- << " " << l++ << " ";
            }
            while(l<=r){
                cout << l++ << " ";
            }
            cout << endl;
        }
    }
