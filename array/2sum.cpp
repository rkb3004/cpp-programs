#include <bits/stdc++.h>
using namespace std;
vector <vector<int>> twoSum (vector <int> nums){
    int n =nums.size();
    sort(nums.begin(), nums.end());
    vector<vector<int>> res;
    for(int i=0; i<n; i++){
        if(nums[i]>nums[i+1]) continue;
        int j=n-1;
        // int k=n-1;
        while(i<j){
            int sum=nums[i]+nums[j];

            if(sum==0){
                res.push_back({nums[i],nums[j]});
                j--;
                i++;
            }
            else if(sum<0){
                i++;
            }
            else{
                j--;
            }    
        }
    
    }
    return res;
}
int main(){
    vector<int> a= {1,-1,0,0,2,-2};
    vector<vector<int>> result = twoSum(a);
    for(auto pair : result) {
        cout << pair[0] << " " << pair[1] << endl;
    }
    return 0;
}
