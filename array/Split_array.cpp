#include <iostream>
#include<stdlib.h>
#include <vector>
#include <algorithm>
using namespace std;
class Solution {
public:
    bool isPossibleToSplit(vector<int>& nums) {
        vector <int> nums1;
        vector <int> nums2;
        if(nums.size()%2==0){
            for(int i=0 ;i<nums.size();i++){
                if(nums[0]==nums[i+1] && nums[i+1]==nums[i+2]){
                    return false;
                    
                }
            }
            for(int i=0;i<nums.size();i+=2){
                cin>>nums1[i];
            }
            for(int i=1;i<nums.size();i+=2){
                cin>>nums2[i];
            }      
        }
        if (nums1.size()==nums2.size())
            return true;
        else 
            return false;
        
    }
};
int main() {
    vector<int> nums = {1,1,2,2,3,4};
    Solution s;
    cout<<s.isPossibleToSplit(nums);
    return 0;
}