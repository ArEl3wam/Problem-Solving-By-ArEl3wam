#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    char c[100];
    int upper=0;
    int lower=0;
    
    gets(c);
    for(int i=0; c[i]!=0; i++){
        if(c[i] >= 'A' && c[i] <= 'Z'){
            upper++;
        }
        if(c[i] >= 'a' && c[i] <= 'z'){
            lower++;
        }
    }
    for(int i=0; c[i]!=0; i++){
        if(upper>lower){
            cout <<(char) toupper(c[i]);
        }
        else{
            cout << (char) tolower(c[i]);
        }
    }
}
