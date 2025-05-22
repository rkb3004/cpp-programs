#include <bits/stdc++.h>
using namespace std;

void CountZeroOne(int arr[], int n){
    int cnt0=0,cnt1=0;
    for(int i=0;i<n;i++){
        if(arr[i]==0)
            cnt0++;
        else
            cnt1++;
    }
    cout<< "Zero Count "<<cnt0<<endl;
    cout<<"One Count " <<cnt1<<endl;
}

int main(){
    int arr[] = {0,1,0,1,1,1,0,0,0,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    CountZeroOne(arr,n);
    return 0;
}