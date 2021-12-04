#include <bits/stdc++.h>
using namespace std;



int main() {
    int n; cin >> n;
    string s; cin >> s;
    string out="";
    out +=s[0];
    for(int i=1; i<n; i++){
        if((n-i)%2==0){
            out=s[i]+out;
        }
        else{
            out=out+s[i];
        }
    }
    cout << out;
}
