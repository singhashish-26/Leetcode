#https://leetcode.com/problems/isomorphic-strings/

class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char,char> ss,tt;
        for(int i=0; i<s.size(); i++)
        {
            if(ss.find(s[i])==ss.end() && tt.find(t[i])==tt.end())
            {
                ss[s[i]]=t[i];
                tt[t[i]]=s[i];
            }
            else
            {
                if(ss[s[i]]!=t[i] || tt[t[i]]!=s[i])
                    return false;
            }
        }
        return true;
    }
};
