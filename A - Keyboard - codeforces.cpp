#include <bits/stdc++.h>

using namespace std;

int main(){
    string str = "qwertyuiopasdfghjkl;zxcvbnm,./";
    char c ;
    string msg;
    cin >> c >> msg;
    if(c == 'R'){
        for(int i = 0; i < msg.length(); i++){
            for(int j=0; j<str.length(); j++){
                if(msg[i] == str[j]){
                    cout << str[j-1];
                }
            }
        }
    }
    if(c == 'L'){
        for(int i = 0; i < msg.length(); i++){
            for(int j=0; j<str.length(); j++){
                if(msg[i] == str[j]){
                    cout << str[j+1];
                }
            }
        }
    }
}  
