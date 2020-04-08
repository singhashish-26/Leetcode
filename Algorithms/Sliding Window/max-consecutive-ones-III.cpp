#https://leetcode.com/problems/max-consecutive-ones-iii/

class Solution {
public:
    int longestOnes(vector<int>& A, int K) {
        int s=0,e=0,mx=0,c=K;
        while(e<A.size())
        {
            if(c>0)
            {
                if(A[e]==0)
                {
                    c--;
                    e++;
                    continue;
                }
                else
                {
                    e++;
                    continue;
                }
            }
            if(c==0 && A[e]==1)
            {
                e++;
                continue;
            }
            if(c==0 && A[e]==0)
            {
                mx = (mx>=(e-s)) ? mx : (e-s);
                while(A[s]!=0){
                    s++;
                }
                s++;
                e++;
            }
        }
        mx = (mx>=(e-s)) ? mx : (e-s);
        return mx;
    }
};
