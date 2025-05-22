#include <bits/stdc++.h>
using namespace std;

void selection(int arr[],int n){
    for(int i=0; i<=n-2;i++){
        int mini=i;
        for(int j=i; j<=n-1;j++){
            if(arr[j]<arr[mini]){
                mini=j;
            }
        }
        int temp=arr[mini];
        arr[mini]=arr[i];
        arr[i]=temp;
    }
}

int main(){
    int arr[]={ 13,46,24,52,9};
    int n=5;
    cout<<"Before sorting: ";
    for(int i=0; i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"After sorting: ";
    // Selection sort
    // Time complexity: O(n^2)
    // Space complexity: O(1)
    // Stable: No
    selection(arr,n);
    for(int i=0; i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}