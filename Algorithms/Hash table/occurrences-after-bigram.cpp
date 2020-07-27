#https://leetcode.com/problems/occurrences-after-bigram/

class Solution {
public:
    vector<string> findOcurrences(string text, string first, string second) {
        string prev1="", prev2="";
        string word;
        stringstream ss(text);
        vector<string>ans;
        while(ss>>word)
        {
            if(prev1==first && prev2==second)
            {
                ans.push_back(word);
            }
            prev1=prev2;
            prev2=word;
        }
        return ans;
    }
};
