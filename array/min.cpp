#include<bits/stdc++.h>
using namespace std;

void minNumber(int arr[], int n){
    int min=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]<min)
            min=arr[i];
    }
    cout<<"Minimum Number is "<<min<<endl;
}
int main(){
    int arr[] = {10,20,30,40,50,60,70,80,90,100};
    int n = sizeof(arr)/sizeof(arr[0]);
    minNumber(arr,n);
    return 0;
}