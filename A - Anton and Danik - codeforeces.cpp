#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int n; cin >> n;
    char  s; 
    int  Acounter=0,Dcounter=0;
    for ( int i=0; i< n; i++){
        cin >> s; 
        if ( s=='A'){
            Acounter++;
        }
        if(s=='D'){
            Dcounter++;
        }
    }
    if (Acounter>Dcounter){
        cout << "Anton";
    }
    else if ( Acounter<Dcounter){
        cout << "Danik";
    }
    else if (Acounter== Dcounter){
            cout << "Friendship";
 
    }
}
