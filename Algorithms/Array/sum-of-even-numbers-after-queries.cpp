#https://leetcode.com/problems/sum-of-even-numbers-after-queries/

class Solution {
public:
    vector<int> sumEvenAfterQueries(vector<int>& A, vector<vector<int>>& queries) {
        vector<int> ans;
        int sume=0;
        for(auto x:A)
        {
            if(x%2==0)
                sume+=x;
        }
        for(int i=0; i<queries.size(); i++)
        {
            if(A[queries[i][1]]%2==0)
            {
                sume-=A[queries[i][1]];
                A[queries[i][1]]+=queries[i][0];
                if(A[queries[i][1]]%2==0)
                {
                    sume+=A[queries[i][1]];
                }
                ans.push_back(sume);
                continue;
            }
            else
            {
                A[queries[i][1]]+=queries[i][0];
                if(A[queries[i][1]]%2==0)
                {
                    sume+=A[queries[i][1]];
                }
                ans.push_back(sume);
                continue;
            }
        }
        return ans;
    }
};
