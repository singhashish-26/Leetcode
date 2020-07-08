#https://leetcode.com/explore/challenge/card/july-leetcoding-challenge/544/week-1-july-1st-july-7th/3377/

class Solution {
public:
    int arrangeCoins(int n) {
        return sqrt((long)2*n + 0.25) - 0.5;
    }
};
