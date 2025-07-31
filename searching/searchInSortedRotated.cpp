#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n = nums.size();
        int low =0;
        int high=n-1;
        vector<int> ans;
        while(low<=high){
            int mid = (low+high)/2;
            if(nums[mid]==target){
                ans.push_back(mid);
                return ans;
            }
            else if(nums[low]<=nums[mid]){
                if(nums[low]<=target && nums[mid]>=target)
                    high=mid-1;
                else
                    low= mid+1;
                

            }
            else{
                if(nums[mid]<=target && nums[high]>=target)
                    low=mid+1;
                else
                    high=mid-1;
            }
        }
        return ans;
    }
};