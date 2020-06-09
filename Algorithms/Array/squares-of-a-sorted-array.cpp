#https://leetcode.com/problems/squares-of-a-sorted-array/

class Solution {
public:
    vector<int> sortedSquares(vector<int>& A) {
        int i=0;
        while(i<A.size() && A[i]<0)
            i++;
        int j=i-1;
        vector<int> ans;
        while(i<A.size() && j>=0)
        {
            if(A[i]*A[i]<=A[j]*A[j])
            {
                ans.push_back(A[i]*A[i]);
                i++;
            }
            else
            {
                ans.push_back(A[j]*A[j]);
                j--;
            }
        }
        while(i<A.size())
            ans.push_back(A[i]*A[i++]);
        while(j>=0)
            ans.push_back(A[j]*A[j--]);
        return ans;
    }
};
