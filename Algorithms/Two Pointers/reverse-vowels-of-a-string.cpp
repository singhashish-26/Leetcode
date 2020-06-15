#https://leetcode.com/problems/reverse-vowels-of-a-string/

class Solution {
public:
    bool isVowel(char c)
    {
        if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u' || c=='A' || c=='E' || c=='I' || c=='O' || c=='U')
            return true;
        return false;
    }
    
    string reverseVowels(string s) {
        int i=0, j=s.size()-1;
        while(i<j)
        {
            if(isVowel(s[i]))
            {
                if(isVowel(s[j]))
                {
                    swap(s[i],s[j]);
                    i++;
                    j--;
                    continue;
                }
                else
                {
                    j--;
                    continue;
                }
            }
            else
            {
                i++;
                if(!isVowel(s[j]))
                    j--;
            }
        }
        return s;
    }
};
