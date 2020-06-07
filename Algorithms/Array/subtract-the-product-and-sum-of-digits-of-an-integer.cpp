#https://leetcode.com/problems/subtract-the-product-and-sum-of-digits-of-an-integer/

class Solution {
public:
    int subtractProductAndSum(int n) {
        string s= to_string(n);
        int prod=1, sum=0;
        for(int i=0; s[i]!='\0'; i++)
        {
            prod*=(s[i]-'0');
            sum+=(s[i]-'0');
        }
        return prod-sum;
    }
};
