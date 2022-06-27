#include <bits/stdc++.h>

using namespace std;

string rev(string s){
    string temp="";
    for(int i=s.size()-1; i>=0; i--){
        temp+=s[i];
    }
    return temp;
}

int main(){

string s;
cin >> s;

cout << s+rev(s);


}
