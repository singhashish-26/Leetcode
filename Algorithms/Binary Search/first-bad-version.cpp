#https://leetcode.com/problems/first-bad-version/

// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int lo=1, hi=n, mid,ans;
        while(lo<=hi)
        {
            mid=(hi-lo)/2+lo;
            if(isBadVersion(mid)==true)
            {
                if(isBadVersion(mid-1)==false)
                {
                    ans=mid;
                    break;
                }
                else
                {
                    hi=mid-1;
                }
            }
            else
            {
                if(isBadVersion(mid+1)==true)
                {
                    ans=mid+1;
                    break;
                }
                else
                    lo=mid+1;
            }
        }
        return ans;
    }
};
