#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n; cin >> n;
    int arr[n];
    int onescnt=0;
    bool found = false;
    int indx=0;
    vector<int> v;
    for(int i=0; i<n; i++){
        cin >> arr[i];
        if(arr[i]==1){
            if(!found){
                indx=i;
                found=true;
            }
            onescnt++;
        }
    }
    int lastIndx;
    for(int i=n-1; i>=0; i--){
        if (arr[i]==1){
            lastIndx=i;
            break;
        }
    }
    if(onescnt==1){
        cout << 1;
    }
    else if(onescnt==0){
        cout << 0;
    }

    else{
        for(int i=indx; i<=lastIndx;){
            int cnt=1;
            while(arr[++i]!=1&& i<=lastIndx){
                cnt++;
            }
            v.push_back(cnt);
        }
        long long sum=1;
        for(int i=0; i<v.size(); i++){
            sum*=v[i];
        }
        cout << sum;
    }



}
