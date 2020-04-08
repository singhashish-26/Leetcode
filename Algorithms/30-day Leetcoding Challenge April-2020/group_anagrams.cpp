#https://leetcode.com/explore/challenge/card/30-day-leetcoding-challenge/528/week-1/3288/

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,int> umap;
        string s;
        int c=0;
        for(int i=0; i<strs.size(); i++)
        {
            s=strs[i];
            sort(s.begin(),s.end());
            if(umap.find(s)==umap.end())
            {
                umap.insert({s,c++});
            }
        }
        vector<vector<string>> temp(c);
        for(int i=0; i<strs.size(); i++)
        {
            s=strs[i];
            sort(s.begin(),s.end());
            temp[umap[s]].push_back(strs[i]);
        }
        return temp;
    }
};
