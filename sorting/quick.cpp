#include <bits/stdc++.h>
using namespace std;

void partition(int arr[], int low, int high, int &i, int &j) {
    i = low;
    j = high;
    int pivot = arr[low];
    while (i <= j) {
        while (arr[i] < pivot) {
            i++;
        }
        while (arr[j] > pivot) {
            j--;
        }
        if (i <= j) {
            swap(arr[i], arr[j]);
            i++;
            j--;
        }
    }
}
void quicksort(int arr[], int l, int r) {
    if (l < r) {
        int i, j;
        partition(arr, l, r, i, j);
        quicksort(arr, l, j);
        quicksort(arr, i, r);
    }
}
int main() {
    int arr[] = {10, 7, 8, 9, 1, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    quicksort(arr, 0, n - 1);
    cout << "Sorted array: \n";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
    return 0;
}
// Time Complexity: O(nlogn)
// Space Complexity: O(logn) for recursive stack space
// In-place sorting algorithm
// Not stable
// Worst case: O(n^2) when the array is already sorted or reverse sorted