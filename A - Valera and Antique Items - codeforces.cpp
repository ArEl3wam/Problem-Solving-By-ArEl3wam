#include <bits/stdc++.h>
using namespace std;
int main()
{   
    int n;
    int total;
    int s;
    cin >> n >> total;
    vector<int> sellers;
    for(int i=0; i<n; i++){
        cin >> s;
        int dummy;
        bool flag=false;
        for(int j=0; j<s; j++){
            cin >> dummy;
            if(dummy<total && flag == false){
                sellers.push_back(i+1);
                flag=true;
            }
        }
    }
    cout << sellers.size()<< endl;
    for(int i=0; i<sellers.size(); i++){
        cout << sellers[i] << " ";
    }
}
