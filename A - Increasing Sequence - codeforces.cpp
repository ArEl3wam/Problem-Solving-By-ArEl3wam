#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
    int n,d,dummy=0,cnt=0;
    cin >> n >>d;
    vector<int> data;
    for(int i=0; i<n; i++){
        cin >> dummy;
        data.push_back(dummy);
    }
    
    for(int i=1; i<n; i++){
        while(data[i] <= data[i-1]){
            dummy=((data[i-1]-data[i])/d)+1;
            data[i] += dummy*d;
            cnt+=dummy;
        }
    }
    cout << cnt;
    
} 
