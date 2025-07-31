#include <bits/stdc++.h>
using namespace std;
int last(vector<int> nums, int target){
    int n = nums.size();
    int low = 0, high = n - 1;
    int ans = -1;
    while(low<=high){
        int mid = (low+high)/2;
        if(nums[mid]==target){
            ans = mid;
            low= mid+1;

        }
        else if(nums[mid]<target){
            low = mid + 1;
        }
        else{
            high = mid - 1;
        }

    }
    return ans;
}
int main() {
    vector<int> nums;
    int n, target;
    cout << "Enter the number of elements in the array: ";
    cin >> n;
    cout << "Enter the elements of the array (sorted): ";
    for(int i = 0; i < n; i++) {
        int x;
        cin >> x;
        nums.push_back(x);
    }
    cout << "Enter the target element to find its last occurrence: ";
    cin >> target;

    int result = last(nums, target);
    
    if(result != -1) {
        cout << "Last occurrence of " << target << " is at index: " << result << endl;
    } else {
        cout << target << " not found in the array." << endl;
    }
    
    return 0;
}