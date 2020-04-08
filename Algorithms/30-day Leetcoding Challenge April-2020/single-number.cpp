#https://leetcode.com/explore/challenge/card/30-day-leetcoding-challenge/528/week-1/3283/

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int t= nums[0];
        for(int i=1; i<nums.size(); i++)
        {
            t^=nums[i];
        }
        return t;
    }
};
