#https://leetcode.com/problems/number-of-good-pairs/

class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int c=0;
        int a[101]={0};
        for(int i=0; i<nums.size(); i++)
        {
            if(a[nums[i]]!=0)
            {
                c+=a[nums[i]];
            }
            a[nums[i]]++;
        }
        return c;
    }
};
