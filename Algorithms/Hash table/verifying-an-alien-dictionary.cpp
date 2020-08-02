#https://leetcode.com/problems/verifying-an-alien-dictionary/

class Solution {
public:
    
    bool isAlienSorted(vector<string>& words, string order) {
        int a[26];
        for(int i=0; i<order.size(); i++)
        {
            a[order[i]-'a']=i;
        }
        
        for(int i=0; i<words.size()-1; i++)
        {
            int f=0;
            for(int p=0; p<min(words[i].size(), words[i+1].size()); p++)
            {
                if(words[i][p]!=words[i+1][p])
                {
                    if(a[words[i][p]-'a']>a[words[i+1][p]-'a'])
                        return false;
                    else
                    {
                        f=1;
                        break;
                    }
                }
            }
            if(words[i].size()>words[i+1].size() && f==0)
            {
                return false;
            }
        }
        return true;
    }
};
