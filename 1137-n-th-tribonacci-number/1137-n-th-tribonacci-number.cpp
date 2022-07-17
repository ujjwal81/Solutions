class Solution {
public:
    int tribonacci(int n) {
        //memozition
//         vector<int> mem(n+1,-1);
        
//         if(n==0)
//             return 0;
//         if(n==1 || n==2)
//             return 1;
//         if(mem[n]!=-1)
//             return mem[n];
//         else
//             mem[n]=tribonacci(n-3)+tribonacci(n-2)+tribonacci(n-1);
//         return mem[n];
        
        //tabulation dp
        vector<int> dp(n+1);
        dp[0]=0;
        if(n==1 || n==2)
            dp[n]=1;
        for(int i=1;i<=n;i++){
            if(i==1)
                dp[i]=dp[i-1]+1;
            else if(i==2)
                dp[i]=dp[i-1]+dp[i-2];
            else
                dp[i]=dp[i-1]+dp[i-2]+dp[i-3];
        }
        return dp[n];
    }
    
};