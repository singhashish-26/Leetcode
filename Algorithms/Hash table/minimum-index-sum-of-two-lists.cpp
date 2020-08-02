#https://leetcode.com/problems/minimum-index-sum-of-two-lists/

class Solution {
public:
    vector<string> findRestaurant(vector<string>& list1, vector<string>& list2) {
        unordered_map<string, int> m,n;
        for(int i=0; i<list1.size(); i++)
        {
            m[list1[i]]=i+1;
        }
        for(int i=0; i<list2.size(); i++)
        {
            if(m.find(list2[i])!=m.end())
            {
                n[list2[i]]=(i+1+m[list2[i]]);
            }
        }
        int mn=INT_MAX;
        for(auto x:n)
        {
            mn = min(mn,x.second);
        }
        vector<string>ans;
        for(auto x:n)
        {
            if(x.second==mn)
            {
                ans.push_back(x.first);
            }
        }
        return ans;
    }
};
