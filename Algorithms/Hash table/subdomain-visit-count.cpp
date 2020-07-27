#https://leetcode.com/problems/subdomain-visit-count/

class Solution {
public:
    vector<string> subdomainVisits(vector<string>& cpdomains) {
        unordered_map<string,int> m;
        int c;
        string temp;
        for(int i=0; i<cpdomains.size(); i++)
        {
            c=stoi(cpdomains[i]);
            for(int j=0; j<cpdomains[i].size(); j++)
            {
                if(cpdomains[i][j]==32)
                {
                    temp= cpdomains[i].substr(j+1);
                    break;
                }
            }
                m[temp]+=c;
                for(int j=0; j<temp.size(); j++)
                {
                    if(temp[j]=='.')
                    {
                        m[temp.substr(j+1)]+=c;
                    }
                }
        }
        vector<string> ans;
        for(auto x:m)
        {
            ans.push_back(to_string(x.second) + " " + x.first);
        }
        return ans;
    }
};
