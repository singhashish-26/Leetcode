#https://leetcode.com/problems/get-equal-substrings-within-budget/

class Solution {
public:
    int equalSubstring(string s, string t, int maxCost) {
        int st=0,e=0,sum=0;
        while(e<s.length())
        {
            sum+=abs(s[e]-t[e++]);
            if(sum>maxCost)
                sum-=abs(s[st]-t[st++]);
        }
        return e-st;
    }
};
