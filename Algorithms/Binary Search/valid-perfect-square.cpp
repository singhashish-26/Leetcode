#https://leetcode.com/problems/valid-perfect-square/

class Solution {
public:
    bool isPerfectSquare(int n) {
        if(n==1)
            return true;
        long long int lo=1,hi=n,mid;
        while(lo+2<=hi)
        {
            mid=(lo+hi)/2;
            if(mid*mid==n)
                break;
            if(mid*mid>n)
                hi=mid;
            else
                lo=mid;
        }
        if(mid*mid==n)
            return true;
        else
            return false;
    }
};
