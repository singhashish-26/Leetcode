#https://leetcode.com/problems/find-n-unique-integers-sum-up-to-zero/

class Solution {
public:
    vector<int> sumZero(int n) {
        if(n==1)
            return {0};
        vector<int>ans;
        int x=n/2;
            while(x)
            {
                ans.push_back(x);
                ans.push_back(-x);
                --x;
            }
        if(n%2==0)
            return ans;
        else
        {
            ans.push_back(0);
            return ans;
        }
    }
};
