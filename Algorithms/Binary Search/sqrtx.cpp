#https://leetcode.com/problems/sqrtx/

class Solution {
public:
    int mySqrt(int x) {
         if(x==0 || x==1)
             return x;
        long long int lo=1, hi=x/2, mid,ans;
        while(lo<=hi)
        {
            mid=(hi-lo)/2 + lo;
            if(mid*mid==x)
            {
                ans=mid;
                break;
            }
            if(mid*mid<x)
            {
                lo=mid+1;
                ans=mid;
            }
            else
            {
                hi=mid-1;
            }
        }
        return ans;
    }
};
