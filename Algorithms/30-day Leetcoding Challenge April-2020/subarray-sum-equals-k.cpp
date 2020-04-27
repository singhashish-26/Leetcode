#https://leetcode.com/explore/challenge/card/30-day-leetcoding-challenge/531/week-4/3307/

class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int sum=0,c=0;
        unordered_map<int,int> m;
        m.insert({0,1});
        for(int i=0; i<nums.size(); i++)
        {
            sum+=nums[i];
            if(m.find(sum-k)!=m.end())
            {
                c+=m[sum-k];
            }
            if(m.find(sum)!=m.end())
                m[sum]++;
            else
                m.insert({sum,1});
        }
        return c;
    }
};
