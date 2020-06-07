#https://leetcode.com/problems/jewels-and-stones/

class Solution {
public:
    int numJewelsInStones(string J, string S) {
        set<char> s;
        for(auto x:J)
            s.insert(x);
        int c=0;
        for(auto x:S)
        {
            if(s.find(x)!=s.end())
                c++;
        }
        return c;
    }
};
