#https://leetcode.com/problems/boats-to-save-people/

class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        vector<int> temp(limit+1,0);
        int c=0;
        for(int i=0; i<people.size(); i++)
        {
            temp[people[i]]++;
        }
        int i=0, j=limit;
        while(i<=j)
        {
            while(i<=j && temp[i]==0){
                i++;
                continue;
            }
            while(i<=j && temp[j]==0)
            {
                j--;
                continue;
            }
            if(temp[i]<=0 && temp[j]<=0)
                break;
            c++;
            if(i+j<=limit)
                temp[i]--;
            temp[j]--;
        }
        return c;
    }
};
