#include<bits/stdc++.h>
using namespace std;

int subArray(vector<int> &nums, long long k){
    map<long long, int > preSumMap;
    long long sum=0;
    int n= nums.size();
    int maxlen =0;
    for(int i=0; i<n;i++){
        sum+=nums[i];
        if(sum==k){
            maxlen=max(maxlen,i+1);
        }
        long long rem= sum-k;
        if(preSumMap.find(rem)!=preSumMap.end()){
            int len = i-preSumMap[rem];
            maxlen=max(maxlen,len);
        }
        if(preSumMap.find(sum)==preSumMap.end()){
            preSumMap[sum]=i;
        }
    }
    return maxlen;
}

int main(){
    vector<int> a ={1,2,3,1,1,1,3,3};
    int k =4;
    cout<<subArray(a,k)<<endl;

}