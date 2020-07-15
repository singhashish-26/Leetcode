#https://leetcode.com/explore/challenge/card/july-leetcoding-challenge/546/week-3-july-15th-july-21st/3391/

class Solution {
public:
    string reverseWords(string s) {
        stringstream ss(s);
        string temp,ans="";
        while(ss>>temp)
        {
            ans=temp+" "+ans;
        }
        return ans.substr(0, ans.size()-1);
    }
};
