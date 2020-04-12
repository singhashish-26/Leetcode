#https://leetcode.com/problems/best-time-to-buy-and-sell-stock-ii/

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if(prices.size()==0)
        {
            return 0;
        }
        int mx=0,n=prices.size();
        int x=prices[0],y;
        for(int i=1; i<n; i++)
        {
            if(prices[i]>prices[i-1])
            {
                mx+= prices[i] - prices[i-1];
            }
        }
        return mx;
    }
};
