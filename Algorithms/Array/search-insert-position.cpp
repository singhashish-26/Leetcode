#https://leetcode.com/problems/search-insert-position/

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n= nums.size();
        int lo=0,hi=n-1,mid;
        if(n==0)
            return 0;
        while(lo<=hi)
        {
            mid=(lo+hi)/2;
            if(nums[mid]<target)
            {
                lo=mid+1;
            }
            else{
                hi=mid-1;
            }
        }
        return lo;
        
    }
};
