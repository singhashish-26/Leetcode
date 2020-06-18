#https://leetcode.com/problems/long-pressed-name/

class Solution {
public:
    bool isLongPressedName(string name, string typed) {
        int i=0,j=0;
        int c1=1;
        while(i<name.size())
        {
            while(i<name.size()-1 && name[i+1]==name[i])
            {
                i++;
                c1++;
            }
            while(j<typed.size() && typed[j]==name[i])
            {
                c1--;
                j++;
            }
            if(c1>0)
            {
                return false;
            }
            c1=1;
            i++;
        }
        if(j==typed.size())
            return true;
        return false;
    }
};
