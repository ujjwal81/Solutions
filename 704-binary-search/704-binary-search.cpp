class Solution {
public:
    int search(vector<int>& nums, int target) {
        int begin=0;
            int n=nums.size();
        int end=n-1;
        while(begin<=end){
            int mid=(end+begin)/2;
            if(nums[mid]==target)
                return mid;
            else if(nums[mid]<target)
                begin=mid+1;
            else
                end=mid-1;
        }
        return -1;
    }
};