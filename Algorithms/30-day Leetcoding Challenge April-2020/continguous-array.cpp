#https://leetcode.com/explore/featured/card/30-day-leetcoding-challenge/529/week-2/3298/

class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        int n= nums.size();
        if(n==0)
        {
            return 0;
        }
        unordered_map<int, int> m; 
        m.insert({0,-1});
        int mx=0,c=0;
        for(int i=0; i<n; i++)
        {
            c+=(nums[i]==0 ? -1 : 1);
            if(m.find(c)!=m.end())
            {
                mx= max(mx, i-m[c]);
            }
            else
            {
                m.insert({c,i});
            }
        }
        return mx;
    }
};
