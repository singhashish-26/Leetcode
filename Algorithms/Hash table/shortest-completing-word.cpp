#https://leetcode.com/problems/shortest-completing-word/

class Solution {
public:
    string shortestCompletingWord(string licensePlate, vector<string>& words) {
        unordered_map<char,int> m;
        for(auto x:licensePlate)
        {
            if(isalpha(x))
            {
                m[tolower(x)]++;
            }
        }
        int f,size=INT_MAX;
        string ans;
        for(int i=0; i<words.size(); i++)
        {
            f=1;
            unordered_map<char,int> um;
            for(int j=0; j<words[i].size(); j++)
            {
                if(isalpha(words[i][j]))
                {
                    um[tolower(words[i][j])]++;
                }
            }
                for(auto x:m)
                {
                    if(um[x.first]<x.second)
                    {
                        f=0;
                        break;
                    }
                }
                if(f==1 && words[i].size()<size)
                {
                    ans=words[i];
                    size=ans.size();
                }
            //um.clear();
        }
        return ans;
    }
};
