#https://leetcode.com/problems/3sum-closest/

class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        int d= INT_MAX, sum,lo,hi,ans=d;
        for(int i=0; i<nums.size(); i++)
        {
            lo=i+1;
            hi=nums.size()-1;
            while(lo<hi)
            {
                sum= nums[i]+nums[lo]+nums[hi];
                if(abs(target-sum)<abs(d))
                {
                    d=(target-sum);
                    ans=sum;
                }
                if(sum<target)
                    lo++;
                else
                    hi--;
                if(d==0)
                    return ans;
            }
        }
        return ans;
    }
};
