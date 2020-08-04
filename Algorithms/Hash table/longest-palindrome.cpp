#https://leetcode.com/problems/longest-palindrome/

class Solution {
public:
    int longestPalindrome(string s) {
        int l[52]={0},c=0;
        for(auto x:s)
        {
            if(isupper(x))
                l[x-'A'+26]++;
            else
                l[x-'a']++;
        }
        for(int i=0; i<52; i++)
        {
            c+=(l[i]/2)*2;
            if(c%2==0 && l[i]%2!=0)
                c++;
        }
        return c;
    }
};
