#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
    int n ; cin >> n;
    int cnt =0;
    int inp=0,out=0;
    for(int i=0; i<n; i++){
        cin >> inp;
        if(inp != -1){
            cnt+= inp;
        }
        if(inp+cnt<0){
            out++;
        }
        if(inp == -1 && inp+cnt >=0){
            cnt--;
        }
    }
    cout << out;
}
