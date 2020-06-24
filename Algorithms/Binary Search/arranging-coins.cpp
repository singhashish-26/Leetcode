#https://leetcode.com/problems/arranging-coins/

class Solution {
public:
    int arrangeCoins(int n) {
        if(n==0 || n==1)
            return n;
        int c=0, i=1;
        while(n>=0)
        {
            n-=i;
            i++;
            c++;
        }
        return c-1;
    }
};
