#https://leetcode.com/problems/fair-candy-swap/

class Solution {
public:
    vector<int> fairCandySwap(vector<int>& A, vector<int>& B) {
        set<int>s;
        int sumA=0,sumB=0,i;
        for(auto x: A)
            sumA+=x;
        for(auto x: B)
        {
            sumB+=x;
            s.insert(x);
        }
        for(auto x:A)
        {
            if(s.find(x+((sumB-sumA)/2))!=s.end())
            {
                return {x,x+((sumB-sumA)/2)};
            }
        }
        return {};
    }
};
