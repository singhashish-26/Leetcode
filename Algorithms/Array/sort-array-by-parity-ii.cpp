#https://leetcode.com/problems/sort-array-by-parity-ii/

class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& A) {
        vector<int>ans(A.size());
        int i=0,k=0,j=A.size()-1;
        while(i<A.size())
        {
            if(A[i]%2==0)
            {
                ans[k]=A[i++];
                k+=2;
            }
            else
            {
                ans[j]=A[i++];
                j-=2;
            }
        }
        return ans;
    }
};
