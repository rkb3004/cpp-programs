#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int findMax(int arr[][100], int n, int m){
    int max=INT_MIN;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(arr[i][j]>max){
                max=arr[i][j];
            }
        }
    }
    return max;
}

int main(){
    int n, m;
    cout<<"Enter the number of rows and columns: ";
    cin>>n>>m;
    int arr[100][100];
    cout<<"Enter the elements of the array: ";
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>arr[i][j];
        }
    }
    cout<<"The maximum element in the 2D array is: "<<findMax(arr, n, m);
    return 0;
}