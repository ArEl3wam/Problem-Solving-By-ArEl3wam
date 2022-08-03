#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int indx=0;
    int cnt=0;
    while(s.find("bear",indx)<s.size() && s.find("bear",indx)>=0 ){
        cnt+=(s.size()-s.find("bear",indx)-3);
        indx++;
    }
    cout << cnt;

}
