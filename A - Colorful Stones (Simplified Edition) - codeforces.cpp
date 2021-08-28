#include <bits/stdc++.h>
 
using namespace std;

int main() {
    string s1,s2;
    cin >> s1 >> s2;
    int indx=0;
    for(int i=0; i<s2.size(); i++){
        if(s2[i]==s1[indx]){
            indx++;
        }
    } 
    cout << indx+1;
}
