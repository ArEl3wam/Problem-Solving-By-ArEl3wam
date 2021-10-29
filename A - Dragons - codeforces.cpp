#include <bits/stdc++.h>
using namespace std;
void ArrSorting(int arr[][2],int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<n-1-i; j++){
            if(arr[j][0]>arr[j+1][0]){
                swap(arr[j][0],arr[j+1][0]);
                swap(arr[j][1],arr[j+1][1]);
            }
        }
    }
}
 
int main()
{   
   int s,t;
   cin >> s >> t;
   bool w=1;
   int arr[t][2];
   for(int i=0; i<t; i++){
       cin >> arr[i][0] >> arr[i][1];
   }
   ArrSorting(arr , t);
   for(int i=0; i<t; i++){
       if(s>arr[i][0]){
           s+=arr[i][1];
       }
       else{
           cout<< "NO";
           w=0;
           break;
       }
   }
   if(w){
   cout <<"YES";
    }
}
