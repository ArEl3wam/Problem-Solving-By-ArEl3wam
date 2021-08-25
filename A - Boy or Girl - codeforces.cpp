#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
   string str; cin >> str;
   bool arr[26]={false};
   for (int i=0; i<str.size(); i++){
       int a=str[i]-'a';
       arr[a]=true;
   }
   int cnt =0;
   for(int i=0; i<26; i++){
       if(arr[i] == true){
           cnt ++;
       }
   }
   if(cnt %2==0){
       cout << "CHAT WITH HER!";
   }
   else{
       cout << "IGNORE HIM!";
   }
    
}
