#https://leetcode.com/problems/next-greater-element-i/

class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        if(nums1.size()==0)
        {
            return {};
        }
        unordered_map<int,int> m;
        stack<int> s;
        s.push(nums2[0]);
        for(int i=1; i<nums2.size(); i++)
        {
            while(!s.empty() && nums2[i]>s.top())
            {
                m.insert({s.top(),nums2[i]});
                s.pop();
            }
            s.push(nums2[i]);
        }
        while(!s.empty())
        {
            m.insert({s.top(),-1});
            s.pop();
        }
        vector<int> ans;
        for(int i=0; i<nums1.size(); i++)
        {
            ans.push_back(m[nums1[i]]);
        }
        return ans;
    }
};
