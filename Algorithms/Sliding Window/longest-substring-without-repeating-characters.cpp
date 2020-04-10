#https://leetcode.com/problems/longest-substring-without-repeating-characters/

#using unordered_map

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s.length()==0)
        {
            return 0;
        }
        unordered_map<char,int> m;
        int mx=0,st=0,e=0;
        while(e<s.length())
        {
            if(m.find(s[e])==m.end())
            {
                m[s[e]]++;
                e++;
            }
            else
            {
                mx = max(mx,(e-st));
                while(s[st]!=s[e])
                {
                    m.erase(s[st]);
                    st++;
                }
                m.erase(s[st]);
                st++;
            }
        }
        mx= max(mx,(e-st));
        return mx;
    }
};


#using vector

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s.length()==0)
        {
            return 0;
        }
        vector<int> v(256, -1);
        int mx=0, st=-1;
        for(int i=0; i<s.length(); i++)
        {
            if(v[s[i]]>st)
            {
                st = v[s[i]];
            }
            v[s[i]]=i;
            mx = max(mx, i-st);
        }
        return mx;
    }
};
