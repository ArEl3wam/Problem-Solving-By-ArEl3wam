#include<bits/stdc++.h>
using namespace std;


int main(){
    
    int n; cin >> n;
    string s;
    int freq[26]={0};
    while(n--){
        cin >> s;
        freq[s[0]-'a']++;
    }
    int ans=0;
    for(int i=0; i<26; i++){
        if(freq[i]==3){
            ans++;
        }
        else if(freq[i]>3){
            int x=freq[i]/2;
            int y=freq[i]-x;
            ans+=( ((x*(x-1)) /2)+( (y*(y-1))/2));
        }
    }
    cout << ans;
    
}
