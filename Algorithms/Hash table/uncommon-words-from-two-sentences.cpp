#https://leetcode.com/problems/uncommon-words-from-two-sentences/

class Solution {
public:
    vector<string> uncommonFromSentences(string A, string B) {
        vector<string> ans;
        unordered_map<string,int> a,b;
        stringstream ss(A);
        string word;
        while(ss>>word)
        {
            a[word]++;
        }
        stringstream yy(B);
        while(yy>>word)
        {
            if(a[word]>0 || a[word]==-1)
            {
                a[word]=-1;
            }
            else
            {
                b[word]++;
            }
            
        }
        for(auto x:a)
        {
            if(x.second==1)
            {
                ans.push_back(x.first);
            }
        }
        for(auto x:b)
        {
            if(x.second==1)
                ans.push_back(x.first);
        }
        return ans;
    }
};
