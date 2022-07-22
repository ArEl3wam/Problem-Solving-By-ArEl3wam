#include <bits/stdc++.h>

using namespace std;

vector<string> combinations;
map<int,int> mp;


void mpFormation(string s){
    int cnt=0;

    for(int i=0; i<s.size(); i++){
        if(s[i]=='+'){
            cnt++;
        }
        else{
            cnt--;
        }
    }
    mp[cnt]++;

}
void combCalc(string s, int indx){
    if(indx>=s.size()){
        combinations.push_back(s);
    }


    else{
        string s1=s;
        s1[indx]='+';
        string s2=s;
        s2[indx]='-';
        combCalc(s1,indx+1);
        combCalc(s2,indx+1);
    }



}



int main()
{



    string s1,s2;
    cin >> s1>>s2;

    float probability;


    int c1=0;

    for(int i=0; i<s1.size(); i++){
        if(s1[i]=='+'){
            c1++;
        }
        else{
            c1--;
        }
    }
    string dummy;
    string q;

    for(int i=0; i<s2.size(); i++){
        if(s2[i]=='+' || s2[i]=='-'){
            dummy+=s2[i];
        }
        else{
            q+=s2[i];
        }
    }
    s2=dummy+q;

    combCalc(s2,s2.size()-q.size());


    for(int i=0; i<combinations.size(); i++){
        mpFormation(combinations[i]);
    }

    float ans=(float(mp[c1]))/((float)combinations.size());


    cout << fixed << setprecision(12) << ans;



}
