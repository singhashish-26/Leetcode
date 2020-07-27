#https://leetcode.com/problems/unique-number-of-occurrences/

class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int> m;
        for(int i=0; i<arr.size(); i++)
        {
            m[arr[i]]++;
        }
        set<int> s;
        for(auto x:m)
        {
            if(s.count(x.second)!=0)
            {
                return false;
            }
            else
                s.insert(x.second);
        }
        return true;
    }
};
