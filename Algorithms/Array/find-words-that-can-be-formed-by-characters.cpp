#https://leetcode.com/problems/find-words-that-can-be-formed-by-characters/

class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        for(int i=0; i<words.size(); i++)
        {
            sort(words[i].begin(), words[i].end());
        }
        sort(chars.begin(),chars.end());
        int c=0;
        for(int i=0; i<words.size(); i++)
        {
            int n = words[i].size();
            int k=0, j=0;
            while(k<chars.size())
            {
                if(words[i][j]==chars[k])
                {
                    j++;
                    k++;
                }
                else
                    k++;
            }
            if(j==n)
                c+=n;
        }
        return c;
    }
};
