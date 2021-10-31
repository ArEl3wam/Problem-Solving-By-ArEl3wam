#include <bits/stdc++.h>
using namespace std;

int main()
{   
    int n,d;
    cin >> n>>d;
    long long sum=(n-1)*10;
    int arr[n+1];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    bool flag=true;
    for(int i=0; i<n; i++){
        sum+=arr[i];
        if(sum>d){
            cout <<-1;
            flag=false;
            break;
        }
    }
    long long pureSum=sum-((n-1)*10);
    if (flag){
        cout << (d-pureSum)/5;
    }    
}
