#https://leetcode.com/problems/move-zeroes/

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int i,j=0;
        for(i=0; i<nums.size(); i++)
        {
            if(i==j)
            {
                if(nums[i]!=0)
                {
                    j++;
                }
                continue;
            }
            if(nums[j]==0 && nums[i]!=0)
            {
                nums[j]=nums[i];
                nums[i]=0;
                j++;
            }
        }
    }
};
