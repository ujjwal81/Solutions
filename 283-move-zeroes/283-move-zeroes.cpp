class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        //move the non zeros
       int n=nums.size();
        //vector<int> ans;
        int count=0;
       
        for(int i=0;i<n;i++)
        {
            if(nums[i]!=0){
               
                swap(nums[i],nums[count]);
                count++;
            }
        }   
    }
};