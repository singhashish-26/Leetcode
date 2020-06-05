#https://leetcode.com/problems/min-cost-climbing-stairs/

class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int fi=0,se=0;
        for(int i=cost.size()-1; i>=0; i--)
        {
            int mn= cost[i]+min(fi,se);
            se=fi;
            fi=mn;
        }
        return min(fi,se);
    }
};
