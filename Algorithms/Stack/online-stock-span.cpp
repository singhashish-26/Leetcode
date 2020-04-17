#https://leetcode.com/problems/online-stock-span/

class StockSpanner {
public:
    stack<pair<int,int>>s;
    int i;
    StockSpanner() {
        i=-1;
    }
    
    int next(int price) {
        i++;
        while(!s.empty() && price>=s.top().first)
        {
            s.pop();
        }
        int span= s.empty()? i+1 : i-s.top().second;
        s.push({price,i});
        return span;
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */
