#include "bits/stdc++.h"

using namespace std;

int main() {

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        map<int,int> mp;
        int num=0;
        for(int i=0; i<n; i++){
            cin >> num;
            mp[num]++;
        }
        vector<int> freq;
        for( auto e: mp){
            freq.push_back(e.second);
        }
        sort(freq.begin(),freq.end());

        int mx = -1;
        for(int i=0; i<freq.size(); i++){
            mx=max (  mx , int ((freq.size()-i)*freq[i]));
        }
        cout << n-mx << endl;

    }
}

