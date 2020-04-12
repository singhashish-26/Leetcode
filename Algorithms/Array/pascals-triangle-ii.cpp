#https://leetcode.com/problems/pascals-triangle-ii/

class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<vector<int>>a(rowIndex+1);
        a[0] = vector<int>(1,1);
        int j=0;
        for(int i=1; i<rowIndex+1; i++)
        {
            a[i]= vector<int>(i+1);
            for(int k=0; k<i+1; k++)
            {
                if(j==0)
                {
                    a[i][k]=1;
                    j++;
                }
                else if(j<i)
                {
                    a[i][k]=a[i-1][k-1]+a[i-1][k];
                    j++;
                }
                else if(j==i)
                {
                    a[i][k]=1;
                    j=0;
                }
            }
        }
        return a[rowIndex];
    }
};
