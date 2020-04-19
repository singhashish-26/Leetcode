#https://leetcode.com/problems/search-in-rotated-sorted-array/

class Solution {
public:
    int search(vector<int>& nums, int t, int lo, int hi)
    {
        int mid;
        while(lo<=hi)
        {
            mid=(lo+hi)/2;
            if(nums[mid]==t)
                return mid;
            if(nums[mid]<t)
                lo=mid+1;
            else
                hi=mid-1;
        }
        return -1;
    }
    
    int findIndex(vector<int>& nums, int lo, int hi)
    {
        int mid,c=0;
        while(lo<=hi)
        {
            mid=(lo+hi)/2;
            if(nums[mid]>nums[c])
            {
                lo=mid+1;
                continue;
            }
            if(nums[mid]<nums[c])
            {
                c=mid;
                hi=mid-1;
                continue;
            }
            if(nums[mid]==nums[c])
                lo=mid+1;
        }
        return c;
    }
    
    int search(vector<int>& nums, int target) {
        if(nums.size()==0)
        {
            return -1;
        }
        int c=0,i=nums.size()-1;
        c= findIndex(nums,0,i);
        if(c==0)
        {
            return search(nums,target,0,nums.size()-1);
        }
        else
        {
            if(target>=nums[0] && target<=nums[c-1])
            {
                return search(nums, target,0, c-1);
            }
            return search(nums,target,c,nums.size()-1);
        }
        
    }
};
