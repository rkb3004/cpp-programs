// ye bruteforce wala tarika hai
#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr1[]={1,1,2,3,3,4,5};
    int arr2[]={2,5,7,6,2};
    int n1=sizeof(arr1)/sizeof(arr1[0]);
    int n2=sizeof(arr2)/sizeof(arr2[0]);

    set<int> st;
    for(int i=0;i<n1;i++){
        st.insert(arr1[i]);
    }
    for(int i=0;i<n2;i++){
        st.insert(arr2[i]);
    }
    vector<int> uni;
    for(auto it :st){
        uni.push_back(it);
    }
    cout<<"Union of two arrays is: ";
    for(int i=0;i<uni.size();i++){
        cout<<uni[i]<<" ";
    }
    cout<<endl;
    return 0;
}