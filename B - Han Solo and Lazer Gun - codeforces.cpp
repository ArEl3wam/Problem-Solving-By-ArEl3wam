#include <bits/stdc++.h>
using namespace std;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n; cin >> n;
    double x,y;
    cin >> x >> y;
    map<double,int> s;
    double a,b;
    bool parallel=false;
    while(n--){
        cin >> a >> b;
        double dx=a-x;
        double dy=b-y;
        if(dx==0){
            parallel=true;
        }
        else{
            s[dy/dx]++;
        }
    }
    cout << s.size()+parallel;

}
