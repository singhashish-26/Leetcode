#https://leetcode.com/problems/partition-array-into-three-parts-with-equal-sum/

class Solution {
public:
    bool canThreePartsEqualSum(vector<int>& A) {
        if(A.size()<3)
            return false;
        int sum=0,i;
        for(i=0; i<A.size(); i++)
        {
            sum+=A[i];
        }
        if(sum%3!=0)
            return false;
        int s=0;
        int f=0;
        for(i=0; i<A.size()-2; i++)
        {
            s+=A[i];
            if(s==sum/3)
            {
                f=1;
                break;
            }
        }
        if(f==0)
            return false;
        i++;
        s=0;
        for(; i<A.size()-1; i++)
        {
            s+=A[i];
            if(s==sum/3)
            {
                return true;
            }
        }
        return false;
    }
};
