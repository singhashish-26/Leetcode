#https://leetcode.com/problems/height-checker/

class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int>t=heights;
        sort(t.begin(),t.end());
        int c=0;
        for(int i=0; i<heights.size(); i++)
        {
            if(heights[i]!=t[i])
                c++;
        }
        return c;
    }
};
