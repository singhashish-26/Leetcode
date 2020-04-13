#https://leetcode.com/problems/rotate-array/

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        k%=nums.size();
        if(k==0)
            return;
        deque<int> q;
        for(int i=0; i<nums.size(); i++)
        {
            q.push_back(nums[i]);
        }
        for(int i=1; i<=k; i++)
        {
            q.push_front(q.back());
            q.pop_back();
        }
        for(int i=0; i<nums.size(); i++)
        {
            nums[i]=q.front();
            q.pop_front();
        }
        
    }
};
