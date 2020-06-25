#https://leetcode.com/problems/heaters/

class Solution {
public:
    int findRadius(vector<int>& houses, vector<int>& heaters) {
        sort(houses.begin(), houses.end());
        sort(heaters.begin(), heaters.end());
        int lo=0,ans=0,mid,hi;
        for(int x:houses){
            hi=heaters.size()-1;
            if(heaters[lo]==x || heaters[hi]==x)
                    continue;
            while(lo+1<hi)
            {
                mid=(hi-lo)/2 + lo;
                if(heaters[mid]>x)
                    hi=mid;
                else
                    lo=mid;
            }
            ans= max(ans, min(abs(heaters[lo]-x), abs(heaters[hi]-x)));
    }
        return ans;
    }
};
