#include<bits/stdc++.h>
using namespace std;

void insertionSort(int arr[], int n){
    for(int i=1; i<=n-1; i++){
        int key=arr[i];
        int j=i-1;
        while(j>=0 && arr[j]>key){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
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
    // Insertion sort
    // Time complexity: O(n^2) in worst case
    // Time complexity: O(n) in best case
    // Time complexity: O(n^2) in average case
    // Best case: O(n) when the array is already sorted
    // Space complexity: O(1)
    // Stable: Yes
    insertionSort(arr,n);
    for(int i=0; i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}