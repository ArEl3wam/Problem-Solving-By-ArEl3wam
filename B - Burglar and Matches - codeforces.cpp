#include <bits/stdc++.h>
#include <conio.h>
using namespace std;

bool sortbysec(const pair<int,int> &a, const pair <int,int> &b){
    return a.second>b.second;
}

int main(){

    int n,m;
    cin >> n >> m;
    int a,b;
    pair<int,int> arr[m];
    for(int i=0; i<m; i++){
        cin >> a >> b;
        arr[i]=make_pair(a,b);
    }
    sort(arr,arr+m,sortbysec);
    long sum=0;
    for(int i=0; i<m && n>0; i++){
        if(arr[i].first<=n){
            sum+=(arr[i].first*arr[i].second);
            n-=arr[i].first;
        }
        else{
            sum+=(n*arr[i].second);
            n=0;
        }
    }
    cout << sum;
}


