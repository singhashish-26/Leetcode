#https://leetcode.com/problems/defanging-an-ip-address/

class Solution {
public:
    string defangIPaddr(string address) {
        string ans;
        for(auto x:address)
        {
            if(x!='.')
                ans+=x;
            else
            {
                ans+="[.]";
            }
        }
        return ans;
    }
};
