#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    string s;
    cin >> s;
    int indicator=0;
    for (int i=0; i <(int) s.length(); i++){
        if(s[i]==s[i+1] && s[i+1]==s[i+2] && s[i+2]==s[i+3]&& s[i+3]==s[i+4]&& s[i+4]==s[i+5]&& s[i+5]==s[i+6]){
            cout<<"YES";
            indicator=1;
            break;
        }
    }
    if( indicator == 0){
        cout << "NO";
    }
 
    
}
