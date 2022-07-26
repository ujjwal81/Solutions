class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        int x=nums1.size();
        int y=nums2.size();
        vector<int> s;
        int i=0;
        int j=0;
        while(i<x && j<y){
            if(nums1[i]==nums2[j]){
                s.push_back(nums1[i]);
                i++;j++;
            }
            else if(nums1[i]>nums2[j]){
                j++;
            }
            else{
                i++;
            }
        }
        return s;
    }
};