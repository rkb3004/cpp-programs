#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr1[]={1,1,2,3,3,4,5};
    int arr2[]={2,5,7,6,2};
    int n1=sizeof(arr1)/sizeof(arr1[0]);
    int n2=sizeof(arr2)/sizeof(arr2[0]);
    int i=0,j=0;

    sort(arr1,arr1+n1);
    sort(arr2,arr2+n2);
    vector<int> inter;
    while(i<n1 && j<n2){
        if(arr1[i]==arr2[j]){
            inter.push_back(arr1[i]);
            i++;
            j++;
        }
        else if(arr1[i]<arr2[j]){
            i++;
        }
        else {
            j++;
        }
    }
    cout<<"Intersection of two arrays is: ";
    for(int i=0;i<inter.size();i++){
        cout<<inter[i]<<" ";
    }
    cout<<endl;
    return 0;
}