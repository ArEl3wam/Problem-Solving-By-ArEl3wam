#include <bits/stdc++.h>
using namespace std;

int sumofTeams=6000;
bool states[5005];
void teams(vector<int> v,int n){
    int cnt=0;
    for(int i=0; i<v.size(); i++){
        if(v[i]==n){
            cnt++;
        }
    }
    if(cnt<sumofTeams){
        sumofTeams=cnt;
    }
}
void printMembers(vector<int> v){
    int m1=-1,m2=-1,m3=-1;
    bool s1=true;
    bool s2=true;
    bool s3=true;
    for(int i=0; i<v.size(); i++){
        if(v[i]==1){
            if(s1){
                if(states[i]==false){
                    m1=i+1;
                    s1=false;
                    states[i]=true;
                }
            }
        }
        if(v[i]==2){
            if(s2){
                if(states[i]==false){
                    m2=i+1;
                    s2=false;
                    states[i]=true;
                }
            }
        }
        if(v[i]==3){
            if(s3){
                if(states[i]==false){
                    m3=i+1;
                    s3=false;
                    states[i]=true;
                }
            }
        }
    }
    cout << m1 << " " << m2 << " " << m3<<endl;
} 

int main()
{   
    int nPlayers;
    cin >> nPlayers;
    vector <int> v;
    while(nPlayers--){
        int t=0;
        cin >>t;
        v.push_back(t);
    }
    
    teams(v,1);
    teams(v,2);
    teams(v,3);
    cout << sumofTeams << endl;
    
   while(sumofTeams--){
        printMembers(v);
    }
}
