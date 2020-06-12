#https://leetcode.com/problems/minimum-value-to-get-positive-step-by-step-sum/

class Solution {
public:
    int minStartValue(vector<int>& nums) {
        int sum=0, ans=1;
        for(int i=0; i<nums.size(); i++)
        {
            sum+=nums[i];
            if(sum<=0)
            {
                ans= max(ans, 1-sum);
            }
        }
        return ans;
    }
};
