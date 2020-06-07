#https://leetcode.com/problems/how-many-numbers-are-smaller-than-the-current-number/

class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int>ans;
        ans=nums;
        sort(ans.begin(),ans.end());
        unordered_map<int,int> m;
        m[ans[0]]=0;
        for(int i=1; i<ans.size(); i++)
        {
            if(m.find(ans[i])==m.end())
                m[ans[i]]+=i;
        }
        for(int i=0; i<nums.size(); i++)
        {
            ans[i]=m[nums[i]];
        }
        return ans;
    }
};
