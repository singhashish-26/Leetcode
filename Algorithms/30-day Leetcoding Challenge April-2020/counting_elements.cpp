#https://leetcode.com/explore/challenge/card/30-day-leetcoding-challenge/528/week-1/3289/

class Solution {
public:
    int countElements(vector<int>& arr) {
        sort(arr.begin(), arr.end());
        int s=0,e=1;
        int c=0;
        while(e<arr.size())
        {
            if((arr[e]-arr[s]==1))
            {
                c++;
                s++;
                continue;
            }
            if(arr[e]==arr[s])
            {
                e++;
                continue;
            }
            if(arr[e]!=arr[s])
            {
                s++;
            }
            
        }
        return c;
    }
};
