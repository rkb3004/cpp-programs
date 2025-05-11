#include<bits/stdc++.h>
using namespace std;

void bubbleSort(int nums[], int n){
    bool swapped= false;
    for(int i=n-1 ; i>=0; i--){
        for(int j=0; j<=i-1; j++){
            if(nums[j]>nums[j+1]){
                swap(nums[j], nums[j+1]);
                swapped=true;
            }
        } 
        if(swapped==false){
            break;
        }
        cout<<"After pass "<<endl;
    }

}

int main(){
    int nums[]={1,2,3,4,5};
    int n=5;
    cout<<"Before sorting: ";
    for(int i=0; i<n; i++){
        cout<<nums[i]<<" ";
    }
    cout<<endl;
    cout<<"After sorting: ";
    // Bubble sort
    // Time complexity: O(n^2)
    // Space complexity: O(1)
    // Stable: Yes
    bubbleSort(nums,n);
    for(int i=0; i<n; i++){
        cout<<nums[i]<<" ";
    }
    return 0;
}