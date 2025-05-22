#include <bits/stdc++.h>
using namespace std;

int max(vector <int> height){
    int n=height.size();
    int l=0; int r=n-1;
    int maxWater=0;
    while(l<r){
        int width = r-l;
        int ht = min(height[l],height[r]);
        int currentWater = width*ht;
        maxWater= max(maxWater,currentWater);
        if(height[l]<height[r])
            l++;
        else
            r--;
    }
    return maxWater;
}

int main(){
    vector<int> m ={1,8,6,2,5,4,8,3,7};
    cout<<"maximum height is the "<<max(m)<<endl;
}