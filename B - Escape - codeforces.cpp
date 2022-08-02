#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    float p; cin >> p;
    float d; cin >> d;
    float t; cin >> t;
    float f; cin >> f;
    float c; cin >> c;
 
    float p_pos_init=t*p;
    int cnt=0;
    if(p>=d){
        cout << 0;
    }
    else{
 
        while(p_pos_init<c){
        float t=p_pos_init/(d-p);
        p_pos_init+=p*t;
        if(p_pos_init<c){
            cnt++;
            p_pos_init+=((f+p_pos_init/d)*p);
            }
        }
            cout << cnt;
        }
 
}
