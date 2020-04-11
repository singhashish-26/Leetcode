#https://leetcode.com/problems/majority-element/

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int m=nums[0],c=1;
        if(nums.size()==1)
            return nums[0];
        for(int i=1; i<nums.size(); i++)
        {
            if(c==0)
            {
                c=1;
                m=nums[i];
            }
            else if(nums[i]==m)
                c++;
            else
                c--;
        }
        return m;
    }
};
