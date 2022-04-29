#include <bits/stdc++.h>
#include <conio.h>
using namespace std;



int main(){

    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i < n; i++){
        cin >> arr[i];
    }
    int out=1;
    for(int i=0; i<n; i++){
        int cnt=1;
        int r=i+1;
        int l=i-1;
        while(arr[r]<=arr[i] && r<n && arr[r]<=arr[r-1]){
            cnt++;
            r++;
        }
        while(arr[l]<=arr[i] && l>=0 && arr[l]<=arr[l+1]){
            cnt++;
            l--;
        }
        if(cnt>out){
            out=cnt;
        }
    }
    cout << out;
}


