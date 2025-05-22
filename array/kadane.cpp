#include <bits/stdc++.h>
using namespace std ;

int kadanes(int arr[],int n){
    int max_sum=arr[0];
    int currernt_sum=0;
    // int n= arr.size();
    for(int i =0;i<n;i++){
        currernt_sum+=arr[i];
        if(currernt_sum>max_sum){
            max_sum=currernt_sum;
        }
        if(currernt_sum<0){
            currernt_sum=0;
        }
    }
    return max_sum;
}
int main(){
    int arr[]={-2, -3, 4, -1, -2, 1, 5, -3};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<kadanes(arr,n);
    return 0;
}