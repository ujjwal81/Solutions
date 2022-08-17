class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        // vector<int> ans;
        // int j=0;
        // while(j<nums.size() && k<=nums.size()){
        //     int mx=INT_MIN;
        //     for(int i=j;i<k;i++){
        //         mx=max(nums[i],mx); //BRUTE FORCE METHOD HAS MORE TIME COMPLEXITIY
        //     }
        //     ans.push_back(mx);
        //     j++;k++;
        // }
        // return ans;
        
        //WE USE DEQUEUE    
        deque<int> dq;
        vector<int> ans;
        for(int i=0;i<nums.size();i++){
        if(!dq.empty() && dq.front()==i-k){
            dq.pop_front();
        }
        while(!dq.empty() && nums[dq.back()]<nums[i]){
            dq.pop_back();
            
        }
        dq.push_back(i);
        if(i>=k-1)
            ans.push_back(nums[dq.front()]);
        }
    return ans;
    }
};