#include <bits/stdc++.h>

using namespace std;

int cnt=0;

void solution (string s){
    if(s.size()==1){
        return ;
    }
    else{
        int dummy =0;
        string newS="";
        for(int i=0; i<s.size(); i++){
            dummy+=s[i]-'0';
        }
        newS=to_string(dummy);
        cnt++;
        solution(newS);
    }

}

int main(){

string s; cin >> s;

solution(s);
cout << cnt;

}
