#include <vector>
using namespace std;

// This code finds the index of a peak element in an array.
// A peak element is an element that is greater than its neighbors.

class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n = nums.size();
        if (n == 1) return 0;
        int low = 0, high = n - 1;
        while (low < high) {
            int mid = low + (high - low) / 2;
            if (nums[mid] > nums[mid + 1]) {
                high = mid;
            } else {
                low = mid + 1;
            }
        }
        return low;
    }
};
int main() {
    vector<int> nums = {1, 2, 3, 1};
    Solution sol;
    int peakIndex = sol.findPeakElement(nums);
    return peakIndex; // Should return the index of the peak element
}