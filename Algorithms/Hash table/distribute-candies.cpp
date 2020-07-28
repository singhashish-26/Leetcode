#https://leetcode.com/problems/distribute-candies/

class Solution {
public:
    int distributeCandies(vector<int>& candies) {
        sort(candies.begin(), candies.end());
        int c=1;
        for(int i=1; i<candies.size(); i++)
        {
            if(candies[i]!=candies[i-1])
                c++;
        }
        cout<<c;
        return (c<=candies.size()/2)? c: candies.size()/2;
    }
};
