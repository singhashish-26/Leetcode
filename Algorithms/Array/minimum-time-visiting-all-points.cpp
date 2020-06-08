#https://leetcode.com/problems/minimum-time-visiting-all-points/

class Solution {
public:
    int minTimeToVisitAllPoints(vector<vector<int>>& points) {
        int t=0;
        for(int i=1; i<points.size(); i++)
        {
            t+=min(abs(points[i][0]-points[i-1][0]),abs(points[i][1]-points[i-1][1]));
            t+=(max(abs(points[i][0]-points[i-1][0]),abs(points[i][1]-points[i-1][1]))-min(abs(points[i][0]-points[i-1][0]),abs(points[i][1]-points[i-1][1])));
        }
        return t;
    }
};
