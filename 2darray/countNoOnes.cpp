class Solution {
public:
    vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
        vector <int> ans;
        int n=mat.size();
        // oneCount -> will store max number of 1's in a row
        int oneCnt=INT_MIN;
        // rowNo -> will score index of max no. of 1's wali row
        int rowNo=-101;
        
        for(int i=0;i<n;i++){
            int cnt=0;
            for(int j =0; j<mat[i].size();j++){
                if(mat[i][j]==1)
                cnt++;
        }
            if(cnt>oneCnt){
                oneCnt=cnt;
                rowNo=i;
            }
        }
         ans.push_back(rowNo);

    ans.push_back(oneCnt);
    return ans;
        
    }
   
    
};