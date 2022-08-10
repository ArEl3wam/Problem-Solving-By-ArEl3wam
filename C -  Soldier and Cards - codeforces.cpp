#include <bits/stdc++.h>
using namespace std;
#define endl "\n"

#define FASTIO ios_base::sync_with_stdio(false);cin.tie(NULL);


int main()
{

FASTIO

int n; cin >> n;
int a,b;
cin >> a;
queue<int> qa;
while(a--){
    cin>>b;
    qa.push(b);
}
cin >> b;
queue<int>qb;
while(b--){
    cin>>a;
    qb.push(a);
}
int cnt =0;
while(cnt<100000 && !qa.empty() && !qb.empty()){
    cnt++;
    a=qa.front();
    qa.pop();
    b=qb.front();
    qb.pop();
    if(a>b){
        qa.push(b);
        qa.push(a);
    }
    else{
        qb.push(a);
        qb.push(b);
    }
}
if(cnt==100000){
    cout << -1;
}
else{
    cout << cnt<< " ";
    if(qb.empty()){
        cout << 1;
    }
    else{
        cout << 2;
    }
}

}
