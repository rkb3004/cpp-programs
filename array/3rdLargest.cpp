#include<bits/stdc++.h>
using namespace std;

    int thirdLargest(vector<int> nums){
        sort(nums.begin(),nums.end());
        int n= nums.size();
        int prevEle=nums[0];
        int cnt=1;
        for(int i=0;i<n;i++){
            if(nums[i]!=prevEle){
                cnt+=1;
                prevEle=nums[i];

            }
            if(cnt==3);
                return nums[i];
        }
        return nums[0];
    }

int main(){
    vector<int> a={5,2};
    cout<<thirdLargest(a);
}