#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n; cin >> n;
    int arr[n];
    int dummy;
    map<int,int> mp_cnt;
    map<int,int> indx;
    map<int,int> diff;
    map<int,bool> flag;
    for(int i=0; i<n; i++){
        cin >> arr[i];
        mp_cnt[arr[i]]++;

        if(mp_cnt[arr[i]]==1){
            diff[arr[i]]=0;
            indx[arr[i]]=i;
            flag[arr[i]]=true;
        }
        else if(mp_cnt[arr[i]]==2){
            diff[arr[i]]=i-indx[arr[i]];
        }
        else{
            if(diff[arr[i]]!=i-indx[arr[i]]){
             flag[arr[i]]=false;
            }
        }
        indx[arr[i]]=i;


    }
    for(int i=0; i<n; i++){
        if(flag[arr[i]]==false){
            mp_cnt.erase(arr[i]);
            diff.erase(arr[i]);
        }
    }
    cout << mp_cnt.size() << "\n";
    auto it1=mp_cnt.begin();
    auto it2=diff.begin();
    for(;it1!=mp_cnt.end(); it1++){
        if(it1->second==1){
            cout << it1->first << " " << 0 << "\n";
        }
        else{
            cout << it1->first << " " << it2->second << "\n";
        }
        it2++;
    }


}
