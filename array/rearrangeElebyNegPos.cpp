#include<bits/stdc++.h>
#include<iostream>
using namespace std;

 vector<int> rearrange(vector<int> nums){
    int n=nums.size();
    vector<int> ans(n,0);
    int posInd=0;
    int negInd=1;
    for(int i=0;i<n;i++){
        if(nums[i]>0){
        ans[posInd]=nums[i];
        posInd+=2;}
        else{
            ans[negInd]=nums[i];
            negInd+=2;
        }


    }
    return ans;
}
int main() {
    vector<int> a = {-1, 3, 2, -4, 4};
    vector<int> result = rearrange(a);
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;
    return 0;
}
