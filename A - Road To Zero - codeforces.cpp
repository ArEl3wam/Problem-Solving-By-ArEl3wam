#include <bits/stdc++.h>
using namespace std;



int main() {
    int t; cin >>t;
     long long x,y,a,b;
     long long sum=0;
    while(t--){
        cin >> x >> y >> a >> b;
        if(x>y){
            swap(x,y);
        }
        if(b<=2*a){
        sum=abs(x-y)*a+b*x;
        }
        else{
            sum=(x+y)*a;
        }
        cout << sum<<endl;
    }
}
