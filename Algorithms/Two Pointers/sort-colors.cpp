#https://leetcode.com/problems/sort-colors/

class Solution {
public:
    void sortColors(vector<int>& nums) {
        int zp=0, op=0,tp=nums.size()-1;
        while(op<=tp && op<nums.size())
        {
            if(nums[zp]!=0 && nums[op]==0)
            {
                swap(nums[zp],nums[op]);
            }
            if(nums[zp]!=0 && nums[tp]==0)
            {
                swap(nums[zp],nums[tp]);
            }
            if(nums[tp]!=2 && nums[op]==2)
                swap(nums[tp], nums[op]);
            if(nums[tp]!=2 && nums[zp]==2)
                swap(nums[tp], nums[zp]);
            if(nums[op]==1)
            {
                op++;
            }
            if(nums[zp]==0)
            {
                zp++;
                if(op<zp)
                    op=zp;
            }
            if(nums[tp]==2)
            {
                tp--;
            }
        }
    }
};
