#include <bits/stdc++.h>
using namespace std;

#define endl "\n"

#define FASTIO ios_base::sync_with_stdio(false);cin.tie(NULL);


#define ll long long
set<int> d;

void divisors(int n){

    for(int i=1; i*i<=n; i++){
        if(n%i==0){
            d.insert(i);
            d.insert(n/i);
        }
    }

}


int main()
{

FASTIO


int n; cin >> n;

int arr[n];
for(int i=0; i<n; i++){
    cin >> arr[i];
}

divisors(n);
bool found = false;
for(auto e : d){
    if(e<3){
        continue;
    }

    int step=n/e;

    for(int i=0; i<step; i++){
        for(int j=i; j<n; j+=step){
            if(!arr[j]){
                found=false;
                break;
            }
            else{
                found=1;
            }
        }
        if(found){
            break;
        }

    }




    if(found){
        break;
    }

}

if(found){
    cout << "YES";
}
else{
    cout << "NO";
}



}
