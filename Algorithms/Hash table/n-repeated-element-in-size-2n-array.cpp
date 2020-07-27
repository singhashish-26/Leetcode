#https://leetcode.com/problems/n-repeated-element-in-size-2n-array/

class Solution {
public:
    int repeatedNTimes(vector<int>& A) {
        int t[10000]={0},i;
        for(i=0; i<A.size(); i++)
        {
            if(++t[A[i]]==2)
            {
                break;
            }
        }
        return A[i];
    }
};
