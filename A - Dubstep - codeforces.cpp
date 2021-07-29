#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    string s;
    cin >> s;
    int n=  s.length();
    int indicator=0;
    for(int i=0; i<n; i++){
        if(s[i] == 'W' && s[i+1] == 'U' && s[i+2] == 'B'){
            i=i+2;
            if(indicator==1){
                cout<< " ";
            }
            continue;
        }
        else{
            indicator=1;
            cout << s[i];
        }
    }
    
}
