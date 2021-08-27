#include <bits/stdc++.h>
 
using namespace std;

 
int main() {
    int n;
    cin >> n;
    int arr[2*n+1];
    for(int i=0; i<2*n; i++){
        cin >> arr[i];
    }
    int cnt=0;
    for(int i=1; i<2*n; i+=2){
        for(int j=0; j<2*n; j+=2){
            if(arr[i]==arr[j] && j!=i-1){
                cnt++;
            }
        }
    }
    cout << cnt;
    
    
    
}
