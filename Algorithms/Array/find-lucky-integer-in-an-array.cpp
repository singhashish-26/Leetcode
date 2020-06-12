#https://leetcode.com/problems/find-lucky-integer-in-an-array/

class Solution {
public:
    int findLucky(vector<int>& arr) {
        unordered_map<int,int> m;
        int c=-1;
        for(auto x:arr)
        {
            m[x]++;
        }
        for(auto x:m)
        {
            if(x.first==x.second && x.first>c)
            {
                c=x.first;
            }
        }
        return c;
    }
};
