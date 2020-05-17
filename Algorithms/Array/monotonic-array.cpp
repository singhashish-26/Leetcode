#https://leetcode.com/problems/monotonic-array/

class Solution {
public:
    bool isMonotonic(vector<int>& A) {
        int i,in=1,de=1;
        for(i=1; i<A.size(); i++)
        {
            if(A[i]>A[i-1])
                de=0;
            if(A[i]<A[i-1])
                in=0;
        }
        return in||de;
    }
};
