#https://leetcode.com/explore/other/card/30-day-leetcoding-challenge/530/week-3/3306/

/**
 * // This is the BinaryMatrix's API interface.
 * // You should not implement it, or speculate about its implementation
 * class BinaryMatrix {
 *   public:
 *     int get(int x, int y);
 *     vector<int> dimensions();
 * };
 */

class Solution {
public:
    int leftMostColumnWithOne(BinaryMatrix &binaryMatrix) {
        vector<int> size;
        size = binaryMatrix.dimensions();
        int ans= INT_MAX,lo,hi,mid,count;
        for(int i=0; i<size[0];i++)
        {
            count=0;
            lo=0;
            hi=size[1]-1;
            while(lo<=hi)
            {
                mid=(lo+hi)/2;
                if(binaryMatrix.get(i,mid)==1)
                {
                    hi=mid-1;
                    count++;
                }
                else
                    lo=mid+1;
            }
            if(count>0)
            {
                ans= min(ans,hi+1);
            }
        }
        if(ans!=INT_MAX)
            return ans;
        return -1;
    }
};
