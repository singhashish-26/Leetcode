#https://leetcode.com/problems/duplicate-zeros/

class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        int j=arr.size()-1,i;
        int c=0;
        for(i=0; i<arr.size()-1; i++)
        {
            if(i>=j)
            {
                break;
            }
            if(arr[i]==0){
                j--;
                //c++;
            }
        }
        for(int k=arr.size()-1; k>=0, j>=0; k--)
        {
            if(i==j)
            {
                arr[k]=arr[j];
                j--;
                continue;
            }
            if(arr[j]==0)
            {
                arr[k]=0;
                if(k-1>=0){
                arr[k-1]=0;
                }
                k--;
                j--;
                continue;
            }
            arr[k]=arr[j];
            j--;
        }
    }
};
