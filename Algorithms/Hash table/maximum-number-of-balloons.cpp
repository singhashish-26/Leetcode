#https://leetcode.com/problems/maximum-number-of-balloons/

class Solution {
public:
    int maxNumberOfBalloons(string text) {
        int m[26]={0};
        for(auto x:text)
        {
            m[x-'a']++;
        }
        if(m['l'-'a']<=1 || m['o'-'a']<=1)
            return 0;
        int mn= min(m['a'-'a'], min(m['b'-'a'],m['n'-'a']));
        if(m['l'-'a']>=2*mn && m['o'-'a']>=2*mn)
        {
            return mn;
        }
        else
        {
            return min(m['l'-'a'],m['o'-'a'])/2;
        }
    }
};
