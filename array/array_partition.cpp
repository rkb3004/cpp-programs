#include <iostream>
#include<stdlib.h>
#include <vector>
#include <algorithm>
using namespace std;
class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int sum=0;
        for(int i=0; i<=nums.size();i=i+2){
            sum=sum+nums[i];
                
            }
        return sum;
    }
      
};
int main() {
    vector<int> nums = {1,4,3,2};
    Solution s;
    cout<<s.arrayPairSum(nums);
    return 0;
}