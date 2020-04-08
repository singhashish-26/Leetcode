#https://leetcode.com/problems/longest-turbulent-subarray/

class Solution {
public:
    int maxTurbulenceSize(vector<int>& A) {
        int n= A.size();
        if(n==1)
        {
            return 1;
        }
        int mx1=0,mx2=0;
        int s=0,e=0;
        while(e<A.size()-1)
        {
            if(e%2==0)
            {
                if(A[e]<A[e+1])
                {
                e++;
                continue;
                }
                else
                {
                    mx1= max(mx1, (e-s+1));
                    e++;
                    s=e;
                    continue;
                }
            }
            if(e%2==1)
            {
                if(A[e]>A[e+1])
                {
                e++;
                continue;
                }
                else
                {
                    mx1= max(mx1,(e-s+1));
                    e++;
                    s=e;
                    continue;
                }
            }
        }
        mx1= max(mx1, (e-s+1));
        s=0;
        e=0;
        while(e<A.size()-1)
        {
            if(e%2==0)
            {
                if(A[e]>A[e+1])
                {
                e++;
                continue;
                }
                else
                {
                    mx2= max(mx2, (e-s+1));
                    e++;
                    s=e;
                    continue;
                }
            }
            if(e%2==1)
            {
                if(A[e]<A[e+1])
                {
                e++;
                continue;
                }
                else
                {
                    mx2= max(mx2,(e-s+1));
                    e++;
                    s=e;
                    continue;
                }
            }
        }
        mx2= max(mx2, (e-s+1));
        mx1 = max(mx1,mx2);
        return mx1;
    }
};
