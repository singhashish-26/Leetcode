#https://leetcode.com/problems/day-of-the-week/

class Solution {
public:
    string dayOfTheWeek(int day, int month, int year) {
        int help[2][12]={{31,60,91,121,152,182,213,244,274,305,335,366},{31,59,90,120,151,181,212,243,273,304,334,365}};
        int lyear=(year-1)/4;
        int nyear=year-1-lyear;
        int days=0;
        string ans;
        string opt[7]={"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};
        if(year%4==0)
        {
            days+=nyear*365+lyear*366;
            int m=month-1;
            if(m>0)
                days+=help[0][m-1];
            days+=day;
            ans=opt[(days-1)%7];
        }
        else
        {
            days+=nyear*365+lyear*366;
            int m=month-1;
            if(m>0)
                days+=help[1][m-1];
            days+=day;
            ans=opt[(days-1)%7];
        }
        return ans;
    }
};
