class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int sum=0;
        int maxs=0;
        for(int i=1;i<prices.size();i++){
            sum+=prices[i]-prices[i-1];
            maxs=max(sum,maxs);
            if(sum<0)
                sum=0;
        }
        return maxs;
    }
};