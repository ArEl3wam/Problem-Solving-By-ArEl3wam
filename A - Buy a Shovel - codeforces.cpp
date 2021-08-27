#include <bits/stdc++.h>
 
using namespace std;

int main() {
    int cnt=1;
    int k,r;
    cin >> k>>r;
    int mark=0;
    int sum=k;
    while(!mark){
        if((sum-r)%10==0 || sum%10==0){
            mark=1;
            break;
        }
        cnt++;
        sum+=k;
        
    }    
  cout << cnt;
}
