#https://leetcode.com/problems/third-maximum-number/

class Solution {
public:
    int thirdMax(vector<int>& nums) {
        long long int a,b,c;
        a=b=c=LLONG_MIN;
        for(int i=0; i<nums.size(); i++)
        {
            if(nums[i]<=c || nums[i]==b || nums[i]==a)
            {
                continue;
            }
            c=nums[i];
            if(c>b)
            {
                swap(c,b);
            }
            if(a<b)
            {
                swap(a,b);
            }
        }
        return c==LLONG_MIN? a: c;
    }
};
