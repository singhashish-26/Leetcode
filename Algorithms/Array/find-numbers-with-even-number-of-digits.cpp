#https://leetcode.com/problems/find-numbers-with-even-number-of-digits/

class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int c=0;
        for(int i=0; i<nums.size(); i++)
        {
            if((int)log10(nums[i])%2!=0)
                c++;
        }
        return c;
    }
};
