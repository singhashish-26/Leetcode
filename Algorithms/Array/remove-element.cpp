#https://leetcode.com/problems/remove-element/

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        if(nums.size()==0)
            return 0;
        int i,j=nums.size()-1;
        int c= count(nums.begin(), nums.end(), val);
        if(c==j+1)
            return 0;
        for(i=0; i<j; i++)
        {
            if(nums[i]==val && nums[j]==val)
            {
                j--;
                i--;
                continue;
            }
            if(nums[i]==val)
            {
                int t= nums[i];
                nums[i]=nums[j];
                nums[j]=t;
                j--;
            }
            
        }
        if(nums[i]==val)
        {
            return i;
        }
        else
            return i+1;
    }
};
