#https://leetcode.com/explore/challenge/card/30-day-leetcoding-challenge/531/week-4/3313/

class FirstUnique {
public:
    set<int> us;
    set<int> s;
    deque<int> q;
    FirstUnique(vector<int>& nums) {
        for(int i=0; i<nums.size(); i++)
        {
            if(s.find(nums[i])==s.end())
            {
               q.push_back(nums[i]);
                us.insert(nums[i]);
            }
            else
            {
                us.erase(nums[i]);
                if(!q.empty() && q.front()==nums[i])
                    q.pop_front();
            }
            s.insert(nums[i]);
        }
    }
    
    int showFirstUnique() {
        while(!q.empty())
            {
                if(us.find(q.front())!=us.end())
                    return q.front();
                else
                    q.pop_front();
            }
            return -1;
    }
    
    void add(int value) {
        if(s.find(value)==s.end())
        {
            q.push_back(value);
            us.insert(value);
        }
        else
        {
            us.erase(value);
            if(!q.empty() && q.front()==value)
                q.pop_front();
        }
        s.insert(value);
    }
};

/**
 * Your FirstUnique object will be instantiated and called as such:
 * FirstUnique* obj = new FirstUnique(nums);
 * int param_1 = obj->showFirstUnique();
 * obj->add(value);
 */
