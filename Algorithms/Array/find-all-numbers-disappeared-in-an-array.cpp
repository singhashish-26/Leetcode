#https://leetcode.com/problems/find-all-numbers-disappeared-in-an-array/

class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int> res;
        /*for(int i=0; i<nums.size(); i++)
        {
            res.push_back(nums[i]);
        }*/
        for(int i=0; i<nums.size(); i++)
        {
            if(nums[abs(nums[i])-1]>0)
            {
                nums[abs(nums[i])-1]*=-1;
            }
        }
        //int c=0;
        for(int i=0; i<nums.size(); i++)
        {
            if(nums[i]>0)
            {
                res.push_back(i+1);
            }
        }
        //res.erase(res.begin(), res.end()-c);
        return res;
    }
};
