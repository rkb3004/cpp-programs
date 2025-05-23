#include <bits/stdc++.h>
using namespace std;

int majorityEle(vector<int> nums){
    int n=nums.size();
    map<int,int> mpp;
    for(int i=0;i<n;i++){
        mpp[nums[i]]++;
    }
    for(auto it :mpp){
        if(it.second>n/2)
            return it.first;
    }

}
int main(){
    vector<int> a={2,2,3,3,1,2,2};
    cout<<"major element "<<majorityEle(a)<<endl;
}