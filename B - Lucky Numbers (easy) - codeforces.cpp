#include <bits/stdc++.h>
 
using namespace std;
long long n;
vector<long long> LuckyNumbers;
void Lgenerator(long long n , int fours , int sevens){
    if (n> 10000000000) return;
    if(fours == sevens){
        LuckyNumbers.push_back(n);
    }
    Lgenerator(n*10+4 , fours+1 , sevens);
    Lgenerator(n*10 +7 , fours , sevens+1);
}
int main(){
    Lgenerator(0,0,0);
    cin >> n;
    sort(LuckyNumbers.begin(),LuckyNumbers.end());
    cout << LuckyNumbers[lower_bound(LuckyNumbers.begin(), LuckyNumbers.end(), n) - LuckyNumbers.begin()];
}
