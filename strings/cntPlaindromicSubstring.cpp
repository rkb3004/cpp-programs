#include <bits/stdc++.h>
using namespace std;
// Count Palindromic Substrings in a String
class Solution {
public:
    int expand(string s, int i, int j){
        int count=0;
        while(i>=0 && j < s.length() && s[i]==s[j]){
            count++;
            i--;
            j++;
            
        }
        return count;
    }
    int countSubstrings(string s) {
        int totalCount =0;
        for(int c=0; c<=s.length(); c++){
            int oddAns= expand(s,c,c);
            int evenAns=expand(s,c,c+1);

            totalCount= totalCount + oddAns+ evenAns;
        }
        return totalCount;
        
    }
};

int main() {
    Solution sol;
    string s;
    cin >> s; 
    int result = sol.countSubstrings(s); 
    cout << result << endl; 
    return 0;
}