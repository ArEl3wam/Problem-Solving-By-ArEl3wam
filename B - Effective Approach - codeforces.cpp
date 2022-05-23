#include <bits/stdc++.h>

using namespace std;



int main(){

long long n; cin >> n;
long long arr[n];
for(int i=0 ; i< n; i++){
    cin >> arr[i];
}

long long startArr [100005]={0};
long long endArr[100005]={0};


long long startCounter=0;
long long endCounter=0;

for(int i=0; i< n; i++){
    startArr[arr[i]]=i+1;
    endArr[arr[i]]=n-i;
}



long long q; cin >> q;
long long qarr[q];
for(int i=0; i<q; i++){
    cin >> qarr[i];
    startCounter+=startArr[qarr[i]];
    endCounter+=endArr[qarr[i]];
}

cout << startCounter << " " << endCounter;


}


