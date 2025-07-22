#include <bits/stdc++.h>
using namespace std;

int binSearch(int arr[], int low, int high, int target) {
    if (low > high) {
        return -1;
    }
    
    int mid = low + (high - low) / 2; 
    
    if (arr[mid] == target) {
        return mid; 
    } else if (arr[mid] < target) {
        return binSearch(arr, mid + 1, high, target); 
    } else {
        return binSearch(arr, low, mid - 1, target); 
    }
}
int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 8;
    
    int result = binSearch(arr, 0, n - 1, target);
    
    if (result != -1) {
        cout << "Element found at index: " << result << endl;
    } else {
        cout << "Element not found in the array." << endl;
    }
    
    return 0;
}