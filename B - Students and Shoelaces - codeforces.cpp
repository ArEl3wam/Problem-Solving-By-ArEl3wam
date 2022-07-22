#include <bits/stdc++.h>

using namespace std;



int main()
{
    int  n,m; cin >> n >> m;

    int arr[n][n+1];
    memset(arr,0,sizeof(arr));
    int a,b;
    for(int i=0; i<m; i++){
        cin >> a >> b;
        arr[a-1][b-1]=1;
        arr[b-1][a-1]=1;
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            arr[i][n]+=arr[i][j];
        }
    }
    int trash[n][n+1];
    bool finished=false;
    int cnt=0;

    while(!finished){
        finished=true;
        for(int i=0; i<n; i++){
            if(arr[i][n]==1){
                finished=false;
            }
        }
        if(finished){
            break;
        }

        copy(&arr[0][0], &arr[0][0]+n*(n+1),&trash[0][0]);

        for(int i=0; i<n; i++){
            if(trash[i][n]==1){
                for(int j=0; i<n; j++){
                    if(trash[i][j]==1){
                        arr[i][j]=0;
                        arr[j][i]=0;
                        arr[i][n]--;
                        arr[j][n]--;
                        break;
                    }
                }
            }
        }
        cnt++;
    }
    cout << cnt;

}
