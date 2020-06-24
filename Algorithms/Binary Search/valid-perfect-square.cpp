#https://leetcode.com/problems/valid-perfect-square/

class Solution {
public:
    bool isPerfectSquare(int n) {
        int i=1;
        while(n>0)
        {
            n-=i;
            i+=2;
        }
        if(n==0)
            return true;
        else
            return false;
    }
};
