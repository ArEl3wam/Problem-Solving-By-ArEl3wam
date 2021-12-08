#include <bits/stdc++.h>
using namespace std;
 
 
int main() {
    int cnt=0;
    stack<char> s1;
    string s; cin >> s;
    for(int i=0; i<s.size(); i++){
        if(s[i] == '('){
            s1.push(s[i]);
        }
        if(s[i] == ')'){
            if(!s1.empty()){
                s1.pop();
                cnt++;
            }
        }
        else{
            continue;
        }
    }
    cout << 2*cnt;
}
