#include <bits/stdc++.h>
 
using namespace std;

int main() {
    int arr[5];
    cin >> arr[0] >> arr[1] >> arr[2] >> arr[3];
    int cnt =0;
    sort(arr,arr+4);
    for(int i=1; i<4; i++){
        if(arr[i]== arr[i-1]){
            cnt++;
        }
    }
    cout << cnt;
}
