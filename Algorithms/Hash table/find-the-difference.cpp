#https://leetcode.com/problems/find-the-difference/

class Solution {
public:
    char findTheDifference(string s, string t) {
        char c=0;
        for(char x:s)
            c^=x;
        for(char x:t)
            c^=x;
        return c;
    }
};
