#https://leetcode.com/problems/next-greater-element-ii/

class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        int n= nums.size();
        if(n==0)
        {
            return {};
        }
        if(n==1)
        {
            return {-1};
        }
        int t[n];
        //memset(t,-1,n*sizeof(int));
        int i=n-2,c=1;
        stack<int>s;
        s.push(n-1);
        t[n-1]=-1;
        while(c<=2)
        {
            while(nums[i]<nums[s.top()])
            {
                t[i]=nums[s.top()];
                s.push(i);
                i--;
                if(i==-1)
                {
                    i=n-1;
                    c++;
                }
            }
            if(c>2)
            {
                break;
            }
            while(!s.empty())
            {
                if(nums[i]>=nums[s.top()])
                {
                    s.pop();
                }
                else
                {
                    t[i]=nums[s.top()];
                    s.push(i);
                    i--;
                    if(i==-1)
                    {
                        i=n-1;
                        c++;
                    }
                }
            }
            t[i]=-1;
            s.push(i);
            i--;
            if(i==-1)
            {
                i=n-1;
                c++;
            }
            /*while(!s.empty() && nums[s.top()]<nums[i])
            {
                t[s.top()]=nums[i];
                //cout<<t[s.top()]<<i<<" ";
                s.pop();
            }
            if(!s.empty() && (s.top()==i || nums[s.top()]==nums[i]))
            {
                s.pop();
            }
            else
            if(t[i]==-1)
            {
                s.push(i);
            }
            i++;
            if(i==n)
                i=0;*/
            
        }
        vector<int>v;
        for(int i=0; i<n; i++)
        {
            //cout<<t[i];
            v.push_back(t[i]);
            //cout<<v[i]<<" ";
        }
        return v;
    }
};
