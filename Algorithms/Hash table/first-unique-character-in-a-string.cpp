#https://leetcode.com/problems/first-unique-character-in-a-string/

class Solution {
public:
    int firstUniqChar(string s) {
        int a[27]={0};
        for(int i=0; s[i]!='\0'; i++)
        {
            if(a[s[i]-'a'+1]==0)
                a[s[i]-'a'+1]=i+1;
            else
                a[s[i]-'a'+1]=-1;
        }
        int mn=s.size()+2;
        for(int i=0; i<27; i++)
        {
            if(a[i]>0)
            {
                mn=min(mn,a[i]);
            }
        }
        if(mn<=s.size())
        return mn-1;
        return -1;
    }
};
