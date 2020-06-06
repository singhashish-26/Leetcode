#https://leetcode.com/problems/positions-of-large-groups/

class Solution {
public:
    vector<vector<int>> largeGroupPositions(string S) {
        vector<vector<int>> ans;
        int c=1;
        int i=0,j;
        for(j=1; S[j]!='\0'; j++)
        {
            if(S[j]==S[j-1])
            {
                c++;
            }
            else
            {
                if(c>=3)
                {
                    ans.push_back({i,j-1});
                    c=1;
                    i=j;
                }
                else
                {
                    c=1;
                    i=j;
                }
            }
        }
        if(c>=3)
            ans.push_back({i,j-1});
        return ans;
    }
};
