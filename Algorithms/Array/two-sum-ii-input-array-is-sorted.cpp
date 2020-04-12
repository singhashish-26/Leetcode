#https://leetcode.com/problems/two-sum-ii-input-array-is-sorted/

class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int l=0, h=numbers.size()-1;
        while(l<h)
        {
            if(numbers[l]+numbers[h]==target)
            {
                return{l+1, h+1};
            }
            else if(numbers[l]+numbers[h]>target)
                h--;
            else
                l++;
        }
        return {};
    }
};
