#https://leetcode.com/problems/count-primes/

class Solution {
public:
    int countPrimes(int n) {
        if(n==0 || n==1)
            return 0;
        int c=0;
        vector<int> v(n,0);
        v[0]=-1;
        v[1]=-1;
        for(long long int i=2; i<n; i++)
        {
            if(v[i]==0)
            {
                for(long long int j=i; j*i<n; j++)
                {
                        v[j*i]=-1;
                }
                c++;
            }
        }
        return c;
    }
};
