class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> dp(numRows);
        dp[0].push_back(1);
        if(numRows==1){
            return dp;
        }

        for(int i=1;i<numRows;i++){
            for(int j=0;j<=i;j++){
                if(j==0 || j==i){
                    dp[i].push_back(1);
                }
                else{
                dp[i].push_back(dp[i-1][j-1]+dp[i-1][j]);
                }
            }
        
        }
        return dp;
    }
};