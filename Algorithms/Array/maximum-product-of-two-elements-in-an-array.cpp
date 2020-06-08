#https://leetcode.com/problems/maximum-product-of-two-elements-in-an-array/

class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int mx=nums[0],smx=-1;
        for(int i=1; i<nums.size(); i++)
        {
            if(nums[i]>=mx)
            {
                smx=mx;
                mx=nums[i];
                continue;
            }
            if(nums[i]<mx && nums[i]>smx)
            {
                smx=nums[i];
            }
        }
        return ((mx-1)*(smx-1));
    }
};
