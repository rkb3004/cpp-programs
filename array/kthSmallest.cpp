#include <bits/stdc++.h>
using namespace std;

void kthSmallest(int arr[],int n,int k){
    int min =arr[0];
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
  
    }
      if(k==0)
        cout<<arr[0];
    else
        cout<<arr[k-1];
    
}
int main(){
    int n;
    int k;
    cout<<"Enter the size of the array and kth element"<<endl;
    cin >> n>>k;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    kthSmallest(arr,n,k);
    
    
}