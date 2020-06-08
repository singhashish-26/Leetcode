#https://leetcode.com/problems/replace-elements-with-greatest-element-on-right-side/

class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int mx= arr[arr.size()-1],temp;
        arr[arr.size()-1]=-1;
        for(int i=arr.size()-2; i>=0; i--)
        {
            temp=arr[i];
            arr[i]=mx;
            mx=max(temp,mx);
        }
        return arr;
    }
};
