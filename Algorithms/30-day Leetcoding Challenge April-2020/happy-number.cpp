#https://leetcode.com/explore/challenge/card/30-day-leetcoding-challenge/528/week-1/3284/

class Solution {
public:
    bool isHappy(int n) {
        string s = to_string(n);
        set<string> t;
        //int flag=0;
        while(1)
        {
            t.insert(s);
            int sum=0, sos=0;
            for(int i=0; s[i]!='\0'; i++)
            {
                sum+=(s[i]-'0');
                sos+=pow((s[i]-'0'),2);
            }
            //cout<<sum<<" "<<sos<<endl;
            if(sum==1)
            {
                break;
            }
            else
            {
                s= to_string(sos);
            }
            if(t.find(s)!=t.end())
            {
                return false;
            }
        }
        return true;
    }
};
