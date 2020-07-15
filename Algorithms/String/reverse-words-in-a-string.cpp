#https://leetcode.com/problems/reverse-words-in-a-string/

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
