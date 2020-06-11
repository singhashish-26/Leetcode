#https://leetcode.com/problems/relative-sort-array/

class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        int temp[1001];
        for(int i=0; i<1001; i++)
        {
            temp[i]=1001+i;
        }
        for(int i=0; i<arr2.size(); i++)
        {
            temp[arr2[i]]=i;
        }
        sort(arr1.begin(), arr1.end(), [temp](int a, int b){
           return temp[a]<temp[b]; 
        });
        return arr1;
    }
};
