#https://leetcode.com/problems/binary-search/

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int x= upper_bound(nums.begin(), nums.end(), target)- nums.begin();
        //cout<<x;
        if(x==0 && nums[x]==target)
            return x;
        if(x>0 &&nums[x-1]==target)
            return x-1;
        return -1;
    }
};
