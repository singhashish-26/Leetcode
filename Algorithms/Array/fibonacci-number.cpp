#https://leetcode.com/problems/fibonacci-number/

class Solution {
public:
    int fib(int N) {
        if(N==0)
            return 0;
        if(N==1 || N==2)
            return 1;
        int a=1,b=1,res;
        for(int i=3; i<=N; i++)
        {
            res=a+b;
            a=b;
            b=res;
        }
        return res;
    }
};
