#https://leetcode.com/problems/generate-a-string-with-characters-that-have-odd-counts/

class Solution {
public:
    string generateTheString(int n) {
        string ans(n,'a');
        if(n%2==0)
            ans[n-1]='b';
        return ans;
    }
};
