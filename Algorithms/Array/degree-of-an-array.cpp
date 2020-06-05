#https://leetcode.com/problems/degree-of-an-array/

class Solution {
public:
    int findShortestSubArray(vector<int>& nums) {
        unordered_map<int, vector<int>> um;
        for(int i=0; i<nums.size(); i++)
        {
            um[nums[i]].push_back(i+1);
        }
        int deg=0;
        for(auto it=um.begin(); it!=um.end(); ++it)
            deg= (deg > it->second.size()) ? deg : it->second.size();
        int ans= nums.size();
        for(auto it=um.begin(); it!=um.end(); ++it)
        {
            if(it->second.size()==deg)
                ans= min(ans, it->second[it->second.size()-1]-it->second[0]+1);
        }
        return ans;
    }
};
