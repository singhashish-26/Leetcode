#https://leetcode.com/problems/find-the-distance-value-between-two-arrays/

class Solution {
public:
    bool count(int x, vector<int> a, int &c, int lo, int hi, int d)
    {
        if(lo>hi)
            return true;
        int mid= (lo+hi)/2;
        if(abs(x-a[mid])<=d)
        {
            return false;
        }
        
        if(x<=a[mid]){
            bool t= count(x,a,c,lo,mid-1,d);
            if(!t)
                return t;
        }
        if(x>=a[mid]){
        bool t= count(x,a,c,mid+1,hi,d);
        if(!t)
            return t;
        }
        return true;
    }
    
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        sort(arr2.begin(),arr2.end());
        int c=0;
        for(int i=0; i<arr1.size(); i++)
        {
            if(count(arr1[i],arr2,c,0,arr2.size()-1,d))
                c++;
        }
        return c;
    }
};
