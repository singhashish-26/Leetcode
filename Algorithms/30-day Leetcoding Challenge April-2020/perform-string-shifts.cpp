#https://leetcode.com/explore/featured/card/30-day-leetcoding-challenge/529/week-2/3299/

class Solution {
public:
    string stringShift(string s, vector<vector<int>>& shift) {
        int total=0;
        int r= shift.size();
        for(int i=0; i<r; i++)
        {
            if(shift[i][0]==0)
            {
                total-=shift[i][1];
            }
            else
            {
                total+=shift[i][1];
            }
        }  
        string x="";
        if(total<=0)
        {
            total=abs(total)%s.length();
            for(int i=total; i<s.length(); i++)
            {
                x+=s[i];
            }
            for(int i=0; i<total; i++)
            {
                x+=s[i];
            }
        }
        else
        {
            total%=s.length();
            for(int i=s.length()-total; i<s.length(); i++)
            {
                x+=s[i];
            }
            for(int i=0; i<s.length()-total; i++)
            {
                x+=s[i];
            }
        }
        x+='\0';
        return x;
    }
};
