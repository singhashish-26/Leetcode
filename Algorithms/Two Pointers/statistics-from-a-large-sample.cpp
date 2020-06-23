#https://leetcode.com/problems/statistics-from-a-large-sample/

class Solution {
public:
    vector<double> sampleStats(vector<int>& count) {
        vector<double> ans;
        double sum=0;
        int n=0,pre=0;
        double mx=-1,mn=256,freq=0,mode,median=-1,a=-1,b=-1;
        for(int i=0; i<count.size(); i++)
        {
            n+=count[i];
        }
        for(int i=0; i<count.size(); i++)
        {
            pre+=count[i];
            if(n%2!=0 && pre>=(n/2)+1 && median==-1)
            {
                median=i;
            }
            if(n%2==0)
                {
                    if(pre==n/2 && a==-1)
                        a=i;
                    if(pre>((n/2)+1) && a==-1 && b==-1)
                    {
                        a=i;
                        b=i;
                    }
                    if(pre>n/2 && b==-1)
                    {
                        b=i;
                    }
                    if(median==-1 && a!=-1 && b!=-1){
                        median=(a+b)/2;
                    }
                }
            if(count[i]>freq)
            {
                mode=i;
                freq=count[i];
            }
            sum+=(count[i]*i);
            if(count[i]>0 && i<mn)
                mn=i;
            if(count[i]>0 && i>mx)
                mx=i;
        }
        sum/=n;
        //cout<<a<<" "<<b;
        ans={mn,mx,sum,median,mode};
        return ans;
    }
};
