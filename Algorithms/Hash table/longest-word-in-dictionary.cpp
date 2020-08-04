#https://leetcode.com/problems/longest-word-in-dictionary/

class Solution {
public:
    string longestWord(vector<string>& words) {
        sort(words.begin(), words.end());
        set<string> s;
        for(string x:words)
            s.insert(x);
        string ans=words[0];
        int f=1;
        for(string x:words)
        {
            for(int i=1; i<x.size(); i++)
            {
                if(s.count(x.substr(0,i))==0)
                {
                    f=0;
                    break;
                }
            }
            if(f==1)
            {
                if(ans.size()==x.size())
                {
                    ans= (ans<=x)? ans:x;
                }
                else
                {
                    if(ans.size()<x.size())
                        ans=x;
                }
            }
            if(f==0)
                f=1;
        }
        return ans;
    }
};
