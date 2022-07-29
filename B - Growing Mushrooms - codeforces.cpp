#include <bits/stdc++.h>

int main()
{
    double n,t1,t2;
    cin >> n >>t1>>t2;
    double k;
    cin >> k;
    k=(100-k)/100;


    double a,b;
    vector<pair<double,int>> v;
    double sum;
    for(int i=1; i<=n; i++){
        cin>>a>>b;
        sum=max(a*t1*k+b*t2,b*t1*k+a*t2);
        v.push_back(make_pair(-1*sum,i));
    }
    sort(v.begin(),v.end());
    for(int i=0; i<v.size(); i++){
        cout << v[i].second << " "<< fixed << setprecision(2) << -1*v[i].first<<endl;
    }

}
//this question has a problem the right solution for the given statement in question
//" In case of equal mushroom heights, the participants are sorted by their numbers (the participants with a smaller number follow earlier).//
// the following solution is the optimal but won`t get accepted

/*
#include <bits/stdc++.h>
#define ll long long int
using namespace std;

struct{
    bool operator()(const pair<double,int>&a , const pair<double,int>&b){
    return a.first>b.first;
}

}comp;


int main()
{
    double n,t1,t2;
    cin >> n >>t1>>t2;
    double k;

    cin >> k;
    k=(100-k)/100;


    double a,b;
    vector<pair<double,int>> v;
    double sum;
    for(int i=1; i<=n; i++){
        cin>>a>>b;
        sum=max(a*t1*k+b*t2,b*t1*k+a*t2);
        v.push_back(make_pair(sum,i));
    }
    sort(v.begin(),v.end(),comp);
    for(int i=0; i<v.size(); i++){
        cout << v[i].second << " "<< fixed << setprecision(2) << v[i].first<<endl;
    }

}
/*

