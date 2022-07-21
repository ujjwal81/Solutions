class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        if(cost.size() == 1)    return cost[0];
		vector<int> answer(cost.size(),0);
		int n = answer.size();
		answer[n-1] = cost[n-1];
		answer[n-2] = cost[n-2];
		for(int i = n-3; i>=0; i--)     answer[i] = cost[i] + min(answer[i+1],answer[i+2]);
		return min(answer[0],answer[1]);
    }
};