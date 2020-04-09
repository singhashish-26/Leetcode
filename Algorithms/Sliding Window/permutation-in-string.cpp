#https://leetcode.com/problems/permutation-in-string/

class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        unordered_map<char, int> alpha,current;
        /*if(s1.length()==0 ||(s1.length()==0 && s2.length()==0))
        {
            return false;
        }*/
        for(int i=0; i<s1.length(); i++)
        {
            alpha[s1[i]]++;
            current[s1[i]]++;
        }
        int s=0,e=0;
        while(e<s2.length())
        {
            if(alpha.find(s2[e])!=alpha.end() && current.find(s2[e])!=current.end())
            {
                current[s2[e]]--;
                if(current[s2[e]]==0)
                {
                    current.erase(s2[e]);
                }
                if(current.size()==0)
                {
                    return true;
                }
                e++;
                continue;
            }
            if(alpha.find(s2[e])!=alpha.end() && current.find(s2[e])==current.end())
            {
                while(s2[s]!=s2[e])
                {
                    if(alpha.find(s2[s])!=alpha.end())
                       {
                           current[s2[s]]++;
                           s++;
                       }
                       else
                       s++;
                }
                if(s2[s]==s2[e])
                {
                    current[s2[e]]++;
                    s++;
                }
                continue;
            }
            if(alpha.find(s2[e])==alpha.end())
            {
                current= alpha;
                e++;
                s=e;
                continue;
            }
        }
        return false;
    }
};
