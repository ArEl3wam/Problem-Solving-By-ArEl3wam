#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
   int n=0; cin >> n;
   int cnt = n; 
   int arr1[n+1]={0};
   bool arr2[n+1]={false};
   for(int i=0; i<n; i++){
       cin >> arr1[i];
   }
   for(int i=1; i<=n; i++){
       arr2[arr1[i-1]]=true;
       while(arr2[cnt] && cnt>0){
           cout << cnt-- << " "; 
       }
       cout << endl;
   }
   
}
