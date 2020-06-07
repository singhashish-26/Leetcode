#https://leetcode.com/problems/number-of-steps-to-reduce-a-number-to-zero/

class Solution {
public:
    int numberOfSteps (int num) {
        return num ? ((num%2==0)? numberOfSteps(num/2): numberOfSteps(num-1)) +1 :0;
    }
};
