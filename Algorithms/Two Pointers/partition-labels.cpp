#https://leetcode.com/problems/partition-labels/

class Solution {
public:
    vector<int> partitionLabels(string S) {
        vector<int> ans;
        unordered_map<char,int> m;
        int i=0;
        while(S[i]!='\0')
        {
            if(m.find(S[i])==m.end())
            {
                m.insert({S[i],i});
            }
            else
            {
                m[S[i]]=i;
            }
            i++;
        }
        int k,ind=-1;
        i=0;
        while(S[i]!='\0')
        {
            k=m[S[i]]-ind;
            ind=m[S[i]];
            if(k==1)
            {
                ans.push_back(k);
                i++;
                continue;
            }
            while(++i<=ind)
            {
                if(m[S[i]]>ind)
                {
                    k+=m[S[i]]-ind;
                    ind=m[S[i]];
                }
            }
            ans.push_back(k);
        }
        return ans;
    }
};
