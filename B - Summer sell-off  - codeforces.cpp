#include <bits/stdc++.h>

using namespace std;




int main()
{


    int n,f;
    cin >> n >> f;
    long long sum=0;

    int k[n],l[n],rush[n];
    for(int i=0; i<n; i++){
        cin >> k[i] >> l[i];
        rush[i]=min(k[i], l[i]-k[i]);
    }
    sort(rush,rush+n,greater<>());

    for(int i=0; i<n; i++){
        sum+=min(k[i],l[i]);
        if(f>0 && rush[i]>0){
            sum+=rush[i];
            f--;
        }
    }



    cout << sum;


}
