#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x1,y1,x2,y2;
    cin >> x1>>y1>>x2>>y2;
    vector<pair<int,int>>v;
    if(x2<x1){
        swap(x1,x2);
    }
    if(y2<y1){
        swap(y1,y2);
    }
    for(int i=x1; i<=x2; i++ ){
        v.push_back(make_pair(i,y1));
    }
    for(int i=y1+1; i<y2; i++ ){
        v.push_back(make_pair(x1,i));
    }
    for(int i=x1; i<=x2; i++ ){
        v.push_back(make_pair(i,y2));
    }
    for(int i=y1+1; i<y2; i++ ){
        v.push_back(make_pair(x2,i));
    }


    int n; cin >> n;
    int a , b , r;
    int cnt =0;

    bool arr[v.size()]={false};

    while(n--){
        cin >> a >> b >> r;
        for(int i=0; i<v.size(); i++){
            if(!arr[i]&&sqrt((a-v[i].first)*(a-v[i].first)+(b-v[i].second)*(b-v[i].second))<=r){
                arr[i]=true;
                cnt++;
            }
        }
    }
    cout << v.size()-cnt;


}
