#https://leetcode.com/problems/keyboard-row/

class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        string s="qwertyuiopasdfghjklzxcvbnm";
        int a[26],c=0;
        for(int i=0; i<s.size(); i++)
        {
            if(i>9 && i<=18 && c==0)
            {
                c++;
            }
            if(i>18 && c==1)
            {
                c++;
            }
            a[s[i]-'a']=c;
        }
        int f=0;
        vector<string>ans;
        for(int i=0; i<words.size(); i++)
        {
            for(int j=1; j<words[i].size(); j++)
            {
                if(a[tolower(words[i][j])-'a']!=a[tolower(words[i][j-1])-'a'])
                {
                    f=1;
                    break;
                }
            }
            if(f==0)
            {
                ans.push_back(words[i]);
            }
            f=0;
        }
        return ans;
    }
};
