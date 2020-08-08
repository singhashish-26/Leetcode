#https://leetcode.com/problems/powerful-integers/

class Solution {
public:
    vector<int> powerfulIntegers(int x, int y, int bound) {
        vector<int>ans;
        set<int>s;
        if(bound<=1)
            return {};
        if(x==1 && y==1)
            return {2};
        for(int i=0; i<=20 && pow(x,i)<=bound; i++)
            for(int j=0; j<=20 && pow(y,j)+pow(x,i)<=bound; j++)
            {
                s.insert(pow(y,j)+pow(x,i));
            }
        for(auto t:s)
        {
            ans.push_back(t);
        }
        return ans;
    }
};
