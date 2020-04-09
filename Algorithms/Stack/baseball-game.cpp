#https://leetcode.com/problems/baseball-game/

class Solution {
public:
    int calPoints(vector<string>& ops) {
        int sum=0;
        stack <int> s;
        for(int i=0; i<ops.size(); i++)
        {
            if(ops[i]=="+" && s.size()>=2)
            {
                int x= s.top();
                s.pop();
                int y= s.top()+ x;
                sum+=y;
                s.push(x);
                s.push(y);
            }
            else
            if(ops[i]=="D" && s.size()>0)
            {
                s.push(s.top()*2);
                sum+=s.top();
            }
            else
            if(ops[i]=="C" && s.size()>0)
            {
                sum-=s.top();
                s.pop();
            }
            else
            {
                int n = stoi(ops[i]);
                sum+=n;
                s.push(n);
            }
        }
        return sum;
    }
};
