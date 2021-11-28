#include<bits/stdc++.h>
using namespace std;

int main (){

    int n; cin >>n;
    int freq[1001]={0};
    int tallest=0; int cnt=0;
    int dummy=0;
    for(int i=0; i<n; i++){
        cin >> dummy;
        freq[dummy]++;
    }
    for(int i=0; i<1001; i++){
        if(freq[i]>0){
            cnt++;
            if(freq[i]>tallest){
                tallest=freq[i];
            }
        }
    }
    cout << tallest<< " " << cnt;
}
