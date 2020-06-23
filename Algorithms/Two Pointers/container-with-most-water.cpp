#https://leetcode.com/problems/container-with-most-water/

class Solution {
public:
    int maxArea(vector<int>& height) {
        int i=0, j=height.size()-1;
        int mx=-1,cap;
        while(i<j)
        {
            cap= min(height[i],height[j])*(j-i);
            mx= max(mx,cap);
            if(height[i]<height[j])
            {
                i++;
                continue;
            }
            if(height[i]>height[j])
            {
                j--;
                continue;
            }
            if(height[i]==height[j])
            {
                if(height[i+1]>=height[j-1])
                    i++;
                else
                    j--;
            }
        }
        return mx;
    }
};
