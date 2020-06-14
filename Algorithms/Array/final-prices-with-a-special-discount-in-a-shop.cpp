#https://leetcode.com/problems/final-prices-with-a-special-discount-in-a-shop/

class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        vector<int> ans(prices.size());
        stack<int> s;
        s.push(prices[prices.size()-1]);
        ans[prices.size()-1]= s.top();
        for(int i=prices.size()-2; i>=0; i--)
        {
            while(!s.empty() && prices[i]<s.top())
            {
                s.pop();
            }
            if(s.empty())
            {
                ans[i]=prices[i];
                s.push(prices[i]);
            }
            else
            {
                ans[i]=prices[i]-s.top();
                s.push(prices[i]);
            }
        }
        return ans;
    }
};
