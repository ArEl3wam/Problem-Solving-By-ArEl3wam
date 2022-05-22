#include <bits/stdc++.h>

using namespace std;

int arr[68]={-1};




void solve(string s){
    if(s[1]=='>'){
        arr[s[0]]++;
    }
    if(s[1]=='<'){
        arr[s[2]]++;
    }

}

int main(){
arr[65]=0;
arr[66]=0;
arr[67]=0;
string s1,s2,s3;
cin >> s1 >> s2 >> s3;
solve(s1);
solve(s2);
solve(s3);

int first=0,second =0,third =0;

for(int i=0; i<3; i++){
    if(arr[65+i]==0){
        first = 65+i;
    }
    if(arr[65+i]==1){
        second = 65+i;
    }
    if(arr[65+i]==2){
        third=65+i;
    }
}
if(first == second || first == third || second== third ){
    cout << "Impossible";
}

else{
    cout << (char)(first) << (char)(second) << (char)(third);
    
} 




}
