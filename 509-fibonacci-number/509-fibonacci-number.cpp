class Solution {
public:
    int fib(int n) {
        //tabulation form
         vector<int> memo(n+1);
        if(n==0 || n==1)
            return n;
        memo[0]=0;
        memo[1]=1;
        for(int i=2;i<=n;i++){
            memo[i]=memo[i-1]+memo[i-2];
        }
        return memo[n];
    }
};