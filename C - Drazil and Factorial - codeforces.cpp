#include <bits/stdc++.h>
using namespace std;
#define endl "\n"

#define FASTIO ios_base::sync_with_stdio(false);cin.tie(NULL);


int main()
{

FASTIO

int n; cin >> n;

string s; cin >> s;
vector<char> out;

for(int i=0; i<s.size(); i++){
    if(s[i]-'0'<=1){
        continue;
    }
    else if ( s[i]=='2' || s[i]=='3' || s[i]=='5' || s[i]=='7'){
        out.push_back(s[i]);
    }
    else if(s[i]=='4'){
        out.push_back('3');
        out.push_back('2');
        out.push_back('2');
    }
    else if(s[i]=='6'){
        out.push_back('5');
        out.push_back('3');
    }
    else if(s[i]=='8'){
        out.push_back('7');
        out.push_back('2');
        out.push_back('2');
        out.push_back('2');
    }
    else{
        out.push_back('7');
        out.push_back('3');
        out.push_back('3');
        out.push_back('2');
    }
}
sort(out.rbegin(),out.rend());
for(int i=0; i<out.size(); i++){
    cout<<out[i];
}
}
