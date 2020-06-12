#https://leetcode.com/problems/count-largest-group/

class Solution {
public:
    int calsum(int n)
    {
        int s=0;
        while(n)
        {
            s+=(n%10);
            n/=10;
        }
        return s;
    }
    
    int countLargestGroup(int n) {
        int t[37]={0},s;
        int mx=0;
        for(int i=1; i<=n; i++)
        {
            s=calsum(i);
            t[s]++;
            mx=t[s]>mx?t[s]:mx;
        }
        int ans=0;
        for(int i=0; i<37; i++)
        {
            if(t[i]==mx)
                ans++;
        }
        return ans;
    }
};
