#include <bits/stdc++.h>
using namespace std;



int main() {
    int n; cin >> n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    int l=0, r=n-1;
    int scnt=0,dcnt=0;
    for(int i=0; i<n; i++){
        if(l>r){
            break;
        }
        if(i%2==0){
            scnt+=(arr[l]>=arr[r])?arr[l]:arr[r];
            (arr[l]>=arr[r])?l++:r--;
        }
        else{
            dcnt+=(arr[l]>=arr[r])?arr[l]:arr[r];
            (arr[l]>=arr[r])?l++:r--;
        }
    }
    cout << scnt << " " << dcnt;
}
