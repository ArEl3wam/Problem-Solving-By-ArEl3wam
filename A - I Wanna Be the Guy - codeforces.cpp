#include <bits/stdc++.h>

using namespace std;

int main(){

    int n=0; cin >> n;
    bool arr[n+1]={false};
    int dummy=0;
    int ind=0;
    int x=0; cin>> x;
    int y=0;
    for(int i = 0; i < x; i++){
        cin >> dummy;
        arr[dummy]= true;
    }
    cin >> y;
    for(int i = 0; i < y; i++){
        cin >> dummy;
        arr[dummy]= true;
    }
    for(int i=1; i<=n; i++){
        if(arr[i] == false){
            cout << "Oh, my keyboard!";
            ind=1;
            break;
        }
    }
    if(ind==0){
        cout << "I become the guy.";
    }
    
}  
