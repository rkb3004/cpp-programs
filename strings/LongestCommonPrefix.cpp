#include <bits/stdc++.h>
using namespace std;

string longestCommonPrefix(vector<string>& strs){
    string ans;
    int i=0;
    while(true){
        char c = strs[0][i];
        for(int j=1;j<strs.size();j++){
            if(strs[j][i]!=c){
                return ans;
            }
        }
        ans.push_back(c);
        i++;
    }
}
int main(){
    vector<string> strs = {"flower","flow","flower"};
    cout<<longestCommonPrefix(strs);
}