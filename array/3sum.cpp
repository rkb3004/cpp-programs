#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> threeSum(vector<int> nums){
    int n = nums.size();
    vector<vector<int>> ans;
    sort(nums.begin(),nums.end());
    for(int i =0; i<n;i++){
        if(nums[i]>nums[i+1]) continue;
        int j = i+1;
        int k = n-1;
        while(j<k){
            int sum = nums[i] + nums[j] + nums[k];
            if(sum == 0){
                ans.push_back({nums[i], nums[j], nums[k]});
                j++;
                k--;
            }
            else if(sum < 0){
                j++;
            }
            else{
                k--;
            }
        }
    }
    return ans;
}
int main(){
    vector<int> a = {1, -1, 0, 0, 2, -2};
    vector<vector<int>> result = threeSum(a);
    for(auto triplet : result) {
        cout << triplet[0] << " " << triplet[1] << " " << triplet[2] << endl;
    }
    return 0;
}