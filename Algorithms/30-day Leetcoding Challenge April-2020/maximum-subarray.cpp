#https://leetcode.com/explore/challenge/card/30-day-leetcoding-challenge/528/week-1/3285/

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int mx=nums[0],mxh=nums[0];
        for(int i=1; i<nums.size(); i++)
        {
            mxh+=nums[i];
            mxh=max(mxh,nums[i]);
            mx=max(mx,mxh);
        }
        return mx;
    }
};
