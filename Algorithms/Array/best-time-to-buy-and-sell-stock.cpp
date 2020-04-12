#https://leetcode.com/problems/best-time-to-buy-and-sell-stock/

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if(prices.size()==0)
            return 0;
        int x=prices[0],y,mx=0;
        for(int i=0; i<prices.size()-1; i++)
        {
            y=prices[i+1];
            if(x>y)
            {
                x=y;
                continue;
            }
            if(x<y)
            {
                mx=max(mx,abs(x-y));
            }
            
        }
        return mx;
    }
};
