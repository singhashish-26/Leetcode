#https://leetcode.com/problems/distance-between-bus-stops/

class Solution {
public:
    int distanceBetweenBusStops(vector<int>& distance, int start, int destination) {
        int d1=0, d2=0;
        if(start>destination)
        {
            int t = start;
            start= destination;
            destination= t;
        }
        for(int i=0; i<distance.size(); i++)
        {
            if(i>=start && i<destination)
                d1+=distance[i];
            else
                d2+=distance[i];
        }
        return min(d1,d2);
    }
};
