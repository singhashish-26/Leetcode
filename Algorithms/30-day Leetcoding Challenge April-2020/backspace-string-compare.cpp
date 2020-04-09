#https://leetcode.com/problems/backspace-string-compare/

class Solution {
public:
    bool backspaceCompare(string S, string T) {
        stack<char> s,t;
        for(int i=0; S[i]!='\0'; i++)
        {
            if(!s.empty() && S[i]=='#')
            {
                s.pop();
            }
            if(S[i]!='#')
            {
                s.push(S[i]);
            }
        }
        for(int i=0; T[i]!='\0'; i++)
        {
            if(!t.empty() && T[i]=='#')
            {
                t.pop();
            }
            if(T[i]!='#')
            {
                t.push(T[i]);
            }
        }
        if(s.size()!=t.size())
        {
            return false;
        }
        else
        {
            while(!s.empty())
            {
                if(s.top()!=t.top())
                    return false;
                else
                {
                    s.pop();
                    t.pop();
                }
            }
            return true;
        }
    }
};
