#https://leetcode.com/problems/find-words-that-can-be-formed-by-characters/

class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        vector<int> alp(26,0);
        for(auto x:chars)
            alp[x-'a']++;
        vector<int>t(26);
        bool flag;
        int c=0;
        for(auto x:words)
        {
            flag=true;
            t=alp;
            for(auto y:x)
            {
                if(--t[y-'a']<0)
                {
                    flag=false;
                    break;
                }
            }
            if(flag){
                c+=x.length();
                }
        }
        return c;
    }
};
