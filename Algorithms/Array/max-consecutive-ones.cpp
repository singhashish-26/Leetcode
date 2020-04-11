#https://leetcode.com/problems/max-consecutive-ones/

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int c=0, mx=0;
        for(int i=0; i<nums.size(); i++)
        {
            if(nums[i]==1)
            {
                c++;
                mx=max(mx,c);
                continue;
            }
            if(nums[i]==0)
            {
                c=0;
            }
        }
        return mx;
    }
};
