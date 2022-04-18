class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int pro=0;int minbuy=prices[0];
        for(int i=1;i<prices.size();i++){
            pro=max(pro,prices[i]-minbuy);
            minbuy=min(minbuy,prices[i]);
        }
        return pro;
    }
};