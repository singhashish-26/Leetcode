#https://leetcode.com/problems/the-k-weakest-rows-in-a-matrix/

class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        set<pair<int,int>> s;
        int c;
        for(int i=0; i<mat.size(); i++)
        {
            c= upper_bound(rbegin(mat[i]), rend(mat[i]), 0)- rend(mat[i]);
            s.insert({-c,i});
        }
        auto itr = s.begin();
        vector<int> ans;
        while(k-- && itr!=s.end())
        {
            ans.push_back(itr->second);
            itr++;
        }
        return ans;
    }
};
