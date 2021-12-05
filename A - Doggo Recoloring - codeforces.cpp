#include <bits/stdc++.h>
using namespace std;


int main() {
    int n; cin >> n;
    string s; cin >> s;
    
    int freq [26]={0};
    for(auto c : s){
        freq[c-'a']++;
    }
    int cnt=0;
    for(int i=0; i<26; i++){
        if(freq[i]>1){
            cnt++;
        }
    }
    if(cnt!=0){
        cout << "Yes";
    }
    else if ( n==1){
        cout << "Yes";
    }
    else{
        cout <<"No";
    }
    

}
