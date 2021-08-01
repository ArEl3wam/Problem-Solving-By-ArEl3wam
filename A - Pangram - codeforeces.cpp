#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    string s;
    cin >> n >> s;
    int freq[26]={0};
    for(int i =  0; i<n; i++){
        char c = s[i];
        c=tolower(c);
        freq[c-'a']+=1;
    }
    int cond=1;
    for(int i = 0; i<26; i++){
        if(freq[i]<1){
            cout << "NO";
            cond=0;
            break;
        }
    }
    if(cond){
       cout << "YES"; 
    }
}  

