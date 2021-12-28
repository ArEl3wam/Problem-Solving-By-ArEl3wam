#include<bits/stdc++.h>
using namespace std;

vector<int> nums;

void primeFactor(int n){

    for(int i=2; i<=n; i++){
        bool prime = true;
        for(int j=2; j*j<=i; j++){
            if(i%j==0){
                prime=false;
                break;
            }
        }
        if(prime){
            nums.push_back(i);
        }
    }
}


int main(){
    vector<int> myNums;
    primeFactor(550);
    for(int i=0; i<nums.size()-1; i++){
        myNums.push_back((1+nums[i]+nums[i+1]));
    }
    //myNums.erase(myNums.begin()+4);
    int size=myNums.size();
    for(int i=0; i<size; i++){
        for(int j=2; j*j<=myNums[i]; j++){
            if(myNums[i]%j==0){
                myNums.erase(myNums.begin()+i);
                i--;
                size--;
                break;
            }
        }
    }
    int n; cin >> n;
    int k; cin >> k;
    int cnt=0;
    while(myNums[cnt]<=n){
        cnt++;
    }
    if(k<=cnt){
        cout << "YES";
    }
    else{
        cout << "NO";
    }
    
}
