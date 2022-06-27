#include <bits/stdc++.h>

using namespace std;



int main(){

int n , m; char c;

char freq[91]={0};

cin >> n >> m >> c;

char arr [n+1][m+1];

for(int i=0; i<n; i++){
    for(int j=0; j<m; j++){
        cin >> arr[i][j];
    }
}

for(int i=0; i<n; i++){

    for(int j=0; j<m; j++){
        if(arr[i][j]==c){

            if(i+1<n && arr[i+1][j]!=c && arr[i+1][j]!='.' ){
                freq[arr[i+1][j]]++;
            }
            if(i-1>=0 && arr[i-1][j]!=c && arr[i-1][j]!='.' ){
                freq[arr[i-1][j]]++;
            }
            if(j+1<m && arr[i][j+1]!=c  && arr[i][j+1]!='.' ){
                freq[arr[i][j+1]]++;
            }
            if(j-1>=0 && arr[i][j-1]!=c && arr[i][j-1]!='.'){
                freq[arr[i][j-1]]++;
            }

        }

    }
}
int sum=0;
for(int i=0; i<91; i++){
    if(freq[i]>0){
        sum++;
    }
}

cout << sum;
}
