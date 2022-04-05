class Solution {
public:
    int search(vector<int>& nums, int target) {
        //after binary search where is the two sorted array
        int n=nums.size();
        int low=0;int high=n-1;
        while(low<=high){
            int mid=(low+high)/2;
            if(nums[mid]==target)
                return mid;
            else if(nums[low]<=nums[mid])
                //here we check whether the righmost elemnt is smaller than mid or not if yes then we check wheter target is between the range or not and then conditinotionaally we change high and low
                if(target>=nums[low] && target<nums[mid])
                    high=mid-1;
                else
                    low=mid+1;
            else
                if(target<=nums[high] && target>nums[mid])
                    low=mid+1;
                else
                    high=mid-1;
        }
        return -1;
    }
};