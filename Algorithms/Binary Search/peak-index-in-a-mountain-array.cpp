#https://leetcode.com/problems/peak-index-in-a-mountain-array/

class Solution {
public:
    int peakIndexInMountainArray(vector<int>& A) {
        int ans;
        int lo=0, hi=A.size()-1,mid;
        while(lo<=hi)
        {
            mid=(lo+hi)/2;
            if(A[mid]>A[mid-1] && A[mid]>A[mid+1])
            {
                ans=mid;
                break;
            }
            if(A[mid]>A[mid-1] && A[mid]<A[mid+1])
            {
                lo=mid+1;
                continue;
            }
            if(A[mid]>A[mid+1] && A[mid]<A[mid-1])
                hi=mid-1;
        }
        return ans;
    }
};
