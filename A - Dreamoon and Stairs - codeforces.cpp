#include <bits/stdc++.h>
using namespace std;
int m;
void solution(int n, int b){
    if(b*2>=n){
        cout << b;
    }
    else{
        solution(n , b+m);
    }
}
int main()
{   
   int n;
   cin >> n>>m;
   if(m>n){
       cout << -1;
   }
   else{
       solution(n,m);
   }
}
