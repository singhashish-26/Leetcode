#https://leetcode.com/problems/plus-one/

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n=digits.size();
        int c=0;
        if(digits[n-1]==9)
        {
            digits[n-1]=0;
            c=1;
        }
        else
            digits[n-1]++;
        for(int i=n-2; i>=0; i--)
        {
            if(c==1)
            {
                if(digits[i]==9)
                {
                    digits[i]=0;
                    c=1;
                }
                else
                {
                    digits[i]++;
                    c=0;
                    break;
                }
            }
        }
        if(c==1)
        {
            digits.insert(digits.begin(),1);
        }
        return digits;
    }
};
