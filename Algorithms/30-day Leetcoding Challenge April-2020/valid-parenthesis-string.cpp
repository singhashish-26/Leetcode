#https://leetcode.com/explore/challenge/card/30-day-leetcoding-challenge/530/week-3/3301/

class Solution {
public:
    bool checkValidString(string s) {
        int l=0,h=0;
        for(int i=0; s[i]!='\0'; i++)
        {
            if(s[i]=='(')
            {
                l++;
                h++;
            }
            if(s[i]==')')
            {
                if(l>0)
                {
                    l--;
                }
                h--;
            }
            if(s[i]=='*')
            {
                if(l>0)
                    l--;
                h++;
            }
            if(h<0)
            {
                return false;
            }
        }
        return l==0;
    }
};
