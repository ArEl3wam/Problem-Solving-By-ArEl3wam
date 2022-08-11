#include <bits/stdc++.h>
using namespace std;
#define endl "\n"

#define FASTIO ios_base::sync_with_stdio(false);cin.tie(NULL);


int main()
{

FASTIO

string s;
stack<char> stk;
cin >> s;
for(int i=0; i<s.size(); i++){
    if(stk.empty()|| stk.top() != s[i]){
        stk.push(s[i]);
    }
    else{
        stk.pop();
    }
}
if(stk.empty()){
    cout << "Yes";
}
else{
    cout << "No";
}
}
