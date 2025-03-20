 #include <iostream>
 #include <bits/stdc++.h>
    using namespace std;
int findMin(int arr[][4],int row,int column){
    int min=INT_MIN;
    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
            if(arr[i][j]<min){
                min=arr[i][j];
            }
        }
    }
    return min;
}

int main(){
    int row,column;
    cout<<"Enter the number of rows and columns: ";
    cin>>row>>column;
    int arr[4][4];
    cout<<"Enter the elements of the array: ";
    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
            cin>>arr[i][j];
        }
    }
    cout<<"The minimum element in the 2D array is: "<<findMin(arr,row,column);
    return 0;
}