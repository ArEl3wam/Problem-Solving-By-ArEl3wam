#include <bits/stdc++.h>
#include <conio.h>
using namespace std;



int main(){

    int n;
    int pos;
    cin >> n >> pos;
    pos--;
    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    int cnt=0;
    int dev=0;
    bool marked[n]={false};
    while(pos+dev<n && pos-dev>=0){
        if(arr[pos+dev]==1 && arr[pos-dev]==1){
            if(dev==0){
                cnt++;
            }
            else{
                cnt+=2;
            }
        }
        marked[pos+dev]=true;
        marked[pos-dev]=true;
        dev++;
    }
    for(int i=0; i<n; i++){
        if(marked[i]==false && arr[i]==true){
            cnt++;
        }
    }
    cout << cnt;



}


