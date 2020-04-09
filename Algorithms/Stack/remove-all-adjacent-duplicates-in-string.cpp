#https://leetcode.com/problems/remove-all-adjacent-duplicates-in-string/

class Solution {
public:
    string removeDuplicates(string S) {
        stack<char> s;
        s.push(S[0]);
        for(int i=1; S[i]!='\0'; i++)
        {
            if(!s.empty() && S[i]==s.top())
            {
                s.pop();
            }
            else
                s.push(S[i]);
        }
        string x="";
        while(!s.empty())
        {
            //cout<<s.top();
            x+=s.top();
            s.pop();
        }
        reverse(x.begin(),x.end());
        return x;
    }
};
