#https://leetcode.com/problems/longest-word-in-dictionary-through-deleting/

class Solution {
public:
    string findLongestWord(string s, vector<string>& d) {
        int i=0,k=0;
        string ans="";
        for(auto x:d)
        {
            while(i<x.size() && k<s.size())
            {
                if(x[i]==s[k])
                {
                    i++;
                    k++;
                    continue;
                }
                else
                    k++;
            }
            if(i==x.size())
            {
                if(ans.size()<x.size())
                    ans=x;
                else
                    if(ans.size()==x.size())
                    {
                        if(ans>x)
                            ans=x;
                    }
            }
            k=0;
            i=0;
        }
        return ans;
    }
};
