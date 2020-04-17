#https://leetcode.com/problems/valid-parentheses/

class Solution {
public:
    bool isValid(string s) {
        if(s.length()==0)
        {
            return 1;
        }
        stack<char> x;
        if(s[0]=='(' || s[0]=='{' || s[0]=='[')
        {
            x.push(s[0]);
        }
        else
        {
            return 0;
        }
        for(int i=1; s[i]!='\0'; i++)
        {
            if(s[i]=='(' || s[i]=='{' || s[i]=='[')
            {
                x.push(s[i]);
            }
            else
            {
                if(x.empty())
                {
                    return 0;
                }
                char t = x.top();
                if((t=='('&& s[i]==')') || (t=='{'&& s[i]=='}') || (t=='['&& s[i]==']'))
                {
                    x.pop();
                }
                else
                    return 0;
            }
        }
        if(x.empty())
        {
            return 1;
        }
        else
            return 0;
    }
};
