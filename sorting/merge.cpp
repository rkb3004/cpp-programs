#include <bits/stdc++.h>
using namespace std;
int low,high;
void merge(int arr[], int low, int mid, int high);
void mergeSort(int arr[] , int low,int high){
    if(low<high){
        int mid=(low+high)/2;
        mergeSort(arr,low,mid);
        mergeSort(arr,mid+1,high);
        merge(arr,low,mid,high);
    }
}

void merge(int arr[], int low, int mid, int high){
    int n1=mid-low+1;
    int n2=high-mid;
    int L[n1],R[n2];
    for(int i=0; i<n1; i++){
        L[i]=arr[low+i];
    }
    for(int j=0; j<n2; j++){
        R[j]=arr[mid+1+j];
    }
    int i=0,j=0,k=low;
    while(i<n1 && j<n2){
        if(L[i]<=R[j]){
            arr[k]=L[i];
            i++;
        }else{
            arr[k]=R[j];
            j++;
        }
        k++;
    }
    while(i<n1){
        arr[k]=L[i];
        i++;
        k++;
    }
    while(j<n2){
        arr[k]=R[j];
        j++;
        k++;
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
    // Merge sort
    // Time complexity: O(nlogn) in worst case
    // Time complexity: O(nlogn) in best case
    // Time complexity: O(nlogn) in average case
    // Best case: O(nlogn) when the array is already sorted
    // Space complexity: O(n)
    // Stable: Yes
    mergeSort(arr,0,n-1);
    for(int i=0; i<n;i++){
        cout<<arr[i]<<" ";
    }
}
// Time complexity: O(nlogn) in worst case