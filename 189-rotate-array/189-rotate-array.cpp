class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int i;
		int n = nums.size();
		vector<int> temp(n);
		for (i = 0; i < n; i++)
		{
			temp[(i + k) % n] = nums[i];
		}
		for (i = 0; i < n; i++)
		{
			nums[i] = temp[i];
		}
    }
};