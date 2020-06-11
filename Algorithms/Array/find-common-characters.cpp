#https://leetcode.com/problems/find-common-characters/

class Solution {
public:
    vector<string> commonChars(vector<string>& A) {
        vector<string> ans;
        string s;
        vector<int> cnt(26,0),cnt1(26,0);
        for(auto x: A[0]){
            cnt[x-'a']++;
            if(A.size()==1)
                return ans;
        }
        for(auto x: A)
        {
            vector<int>t(26,0);
            cnt1=cnt;
            cnt=t;
            ans={};
            for(auto y:x)
            {
                if(--cnt1[y-'a']>=0){
                    ans.push_back(s=y);
                    ++cnt[y-'a'];
                }
            }
            
        }
        return ans;
    }
};
