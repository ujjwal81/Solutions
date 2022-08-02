class Solution {
public:
    void sortColors(vector<int>& nums) {
        // two pass solution
        // int count0=0;
        // int count1=0;
        // int count2=0;
        // for(int i=0;i<nums.size();i++){
        //     if(nums[i]==0){
        //         count0++;
        //     }
        //     else if(nums[i]==1){
        //         count1++;
        //     }
        //     else if(nums[i]==2){
        //         count2++;
        //     }
        // }
        // for(int i=0;i<count0;i++)
        //     nums[i]=0;
        // for(int i=count0;i<(count1+count0);i++)
        //     nums[i]=1;
        // for(int i =count0+count1;i<nums.size();i++)
        //     nums[i]=2;
        
        //one pass
        int low=0;
        int index=0;
        int high=nums.size()-1;
        while(index<=high){
            if(nums[index]==2){
                nums[index]=nums[high];
                nums[high]=2;
                high--;index--;
            }
            else if(nums[index]==0){
                nums[index]=nums[low];
                nums[low]=0;
                low++;
            }
            index++;
            }
        
    }
};