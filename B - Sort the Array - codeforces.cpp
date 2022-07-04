#include <bits/stdc++.h>

using namespace std;

int blabla(int arr[], int strt , int n){
    int endx=strt;
    while(arr[endx+1]<arr[endx] && endx <n-1){
        endx++;
    }
    return endx;
}

int main()
{


    int n; cin >> n;
    int arr[n];
    int strt=-1;
    for(int i=0; i<n; i++){
        cin >> arr[i];
        if(i>0 && arr[i]<arr[i-1] && strt == -1){
            strt=i-1;
        }
    }
    bool sorted= true;

    int endx =blabla(arr,strt,n);

    

    for(int i=endx+1; i<n-1; i++ ){
        if(arr[i+1]<arr[i]){
           sorted=false;
        }
    }
    if(strt == -1){
        cout << "yes" << endl << 1 << " " << 1;
    }


    else if((arr[strt] > arr[endx+1] && endx<n-1) || (arr[endx]< arr[strt-1] && strt >0) || !sorted ){
        cout << "no";
    }
    else{
        cout << "yes" << endl << strt+1<< " " << endx+1;
    }


}
