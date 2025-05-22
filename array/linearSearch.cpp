#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> arr ={2,8,4,6,10,13};
    for(int i=0;i<arr.size();i++){
        if(arr[i]==10){
            cout<<"Element found at index "<<i<<endl;
            break;
        }
    }
}