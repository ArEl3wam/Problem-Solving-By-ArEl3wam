#include <bits/stdc++.h>

using namespace std;



int main(){

int n; cin>> n;
int arr[n+1];
arr[0]=0;
long long energy=0;

long long solution=0;

for(int i=1; i <n+1; i++){
    cin >> arr[i];
    energy+=arr[i-1]-arr[i];
    if(energy<0){
        solution+=-energy;
        energy=0;
    }

}
cout << solution;

}
