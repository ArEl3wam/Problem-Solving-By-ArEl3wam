#include <bits/stdc++.h>

using namespace std;




int main()
{




int n; cin >> n;

double outerRadius[n];

for(int i=0; i<n; i++){
    cin >> outerRadius[i];
}
sort(outerRadius,outerRadius+n);
int m; cin >>m;

double outerDen[m];

for(int i=0; i<m; i++){
    cin >> outerDen[i];
}
sort(outerDen,outerDen+m);

int z; cin >> z;

double innerDen[z];
for(int i=0; i<z; i++){
    cin >> innerDen[i];
}

sort(innerDen,innerDen+z);

double a,b; cin >> a >> b;

double ans=sqrt((outerDen[m-1]*outerRadius[n-1]*outerRadius[n-1])/((a/b)*innerDen[0]+outerDen[m-1]) );

cout << fixed << setprecision(12) <<  ans;
}
