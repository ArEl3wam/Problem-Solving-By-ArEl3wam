#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
   int n , t,cnt=0;
   cin >> n>>t;
   while(n--){
       int dummy;
       cin >> dummy;
       if(dummy>t){
           cnt+=2;
       }
       else{
           cnt++;
       }
       
   }
   cout << cnt;
    
}
