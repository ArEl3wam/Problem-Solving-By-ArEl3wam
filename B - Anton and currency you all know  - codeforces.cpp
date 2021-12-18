#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
    string s; cin >> s;
    int indx=100001;
    for(int i=0; i<s.size(); i++){
        if((int)s[i]%2==0){
            indx=i;
            if(s[s.size()-1]>s[i]){
                break;
            }
        }
    }
    if(indx<100001){
        swap(s[indx],s[s.size()-1]);
        cout << s;
    }
    else{
        cout << -1;
    }
}
