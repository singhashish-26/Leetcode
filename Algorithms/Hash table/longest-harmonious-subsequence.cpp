#https://leetcode.com/problems/longest-harmonious-subsequence/

class Solution {
public:
    int findLHS(vector<int>& nums) {
        unordered_map<int, int> m;
        int ans=0;
        for(int x:nums)
        {
            m[x]++;
            if(m.find(x-1)!=m.end())
                ans= max(ans, m[x-1]+m[x]);
            if(m.find(x+1)!=m.end())
                ans=max(ans,m[x+1]+m[x]);
        }
        return (ans>1)?ans:0;
    }
};
