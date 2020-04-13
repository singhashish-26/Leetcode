#https://leetcode.com/explore/featured/card/30-day-leetcoding-challenge/529/week-2/3297/

class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        set<int> s;
        unordered_map<int,int> m;
        for(int i=0; i<stones.size(); i++)
        {
            s.insert(stones[i]);
            m[stones[i]]++;
        }
        set<int>:: iterator it;
        int x,y;
        while(s.size()>1)
        {
            it= --s.end();
            if(m[*it]==2)
            {
                m.erase(*it);
                s.erase(*it);
                continue;
            }
            if(m[*it]>2)
            {
                m[*it]-=2;
                continue;
            }
            if(m[*it]==1)
            {
                y=*it;
                --it;
                x=*it;
                int z= y-x;
                m.erase(y);
                s.erase(y);
                if(m[x]==1)
                {
                    m.erase(x);
                    s.erase(x);
                }
                else
                {
                    m[x]--;
                }
                s.insert(z);
                m[z]++;
            }
        }
        if(s.size()==0)
        {
            return 0;
        }
        it= s.begin();
        if(m[*it]%2==1)
        {
            return *it;
        }
        else
        {
            return 0;
        }
    }
};
