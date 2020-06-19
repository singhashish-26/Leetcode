#https://leetcode.com/problems/implement-strstr/

class Solution {
public:
    int strStr(string haystack, string needle) {
        if(needle.size()==0)
            return 0;
        int st=0,e=0,j=0,ind=-1;
        while(e<haystack.size() && j<needle.size())
        {
            if(j==0 && haystack[e]==needle[j])
            {
                ind=e;
                j++;
                e++;
                continue;
            }
            if(j>0 && haystack[e]==needle[j])
            {
                j++;
                e++;
                continue;
            }
            if(haystack[e]!=needle[j])
            {
                j=0;
                e++;
                while(st++<e && haystack[st]!=needle[0]);
                e=st;
                continue;
            }
        }
        if(j==needle.size())
            return ind;
        else
            return -1;
    }
};
