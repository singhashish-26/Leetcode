#https://leetcode.com/problems/grumpy-bookstore-owner/

class Solution {
public:
    int maxSatisfied(vector<int>& customers, vector<int>& grumpy, int X) {
        int mxh=0;
        for(int i=0; i<customers.size(); i++)
        {
            if(grumpy[i]==0)
            {
                mxh+=customers[i];
            }
        }
        int sum=0,mx=0;
        int s=0,e=0;
        while(e<customers.size())
        {
            if((e-s+1)<=X)
            {
                if(grumpy[e]==1)
                {
                    sum+=customers[e];
                }
                e++;
            }
            else
            {
                mx= max(mx, mxh+sum);
                if(grumpy[s]==1)
                {
                    sum-=customers[s];
                }
                s++;
            }
        }
        mx = max(mx, mxh+sum);
        return mx;
    }
};
