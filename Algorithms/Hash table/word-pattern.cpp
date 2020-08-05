#https://leetcode.com/problems/word-pattern/

class Solution {
public:
    bool wordPattern(string pattern, string str) {
        unordered_map<string,char>m;
        set<char> s;
        stringstream ss(str);
        string word;
        vector<string> v;
        int i=0;
        while(ss>>word)
        {
            v.push_back(word);
            if(m.find(word)==m.end() && s.find(pattern[i])==s.end())
            {
                m[word]=pattern[i];
                s.insert(pattern[i]);
            }
            else
            {
                char t= m[word];
                if(t!=pattern[i])
                    return false;
                else
                    m[word]=t;
            }
            i++;
        }
        if(i!=pattern.size())
            return false;
        return true;
    }
};
