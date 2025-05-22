#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void transpose(int arr[][100], int n, int){
    for(int i=0; i<n; i++){
        for(int j=i; j<n; j++){
            swap(arr[i][j], arr[j][i]);
        }
    }
    cout<<"The transpose of the matrix is: "<<endl;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}
int main(){
    int n;
    cout<<"Enter the number of rows and columns: ";
    cin>>n;
    int arr[100][100];
    cout<<"Enter the elements of the array: ";
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin>>arr[i][j];
        }
    }
    transpose(arr, n, n);
    return 0;
}