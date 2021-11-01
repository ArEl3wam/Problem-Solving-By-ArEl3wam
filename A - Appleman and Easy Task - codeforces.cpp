#include <bits/stdc++.h>
using namespace std;
bool flag=true;
void solution(char arr[105][105] , int i, int j,int n){
    int cnt=0;
    for(int k=0; k<n; k++){

        if(arr[i][k] == 'o' && k!=j){
            if(k==j+1 || k==j-1){
                cnt++;
            }
        }
        if(arr[k][j] == 'o' && k!=i){
            if(k==i+1 || k==i-1){
                cnt++;
            }
        }
    }
    if(cnt%2==0){
        flag=true;
    }
    else{
        flag=false;
    }
}
int main()
{  
    int n;
    cin >>n;
    string s;
    char arr[105][105];
    for(int i=0; i<n; i++){
       cin >> s;
       strcpy(arr[i],s.c_str());
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            solution(arr ,i,j,n);
            if(!flag){
                cout << "NO";
                break;
            }
        }
        if(!flag){
                break;
            }
    }
    if(flag){
        cout << "YES";
    }
    
}
