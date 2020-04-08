#https://leetcode.com/problems/longest-repeating-character-replacement/

class Solution {
public:
    int characterReplacement(string s, int k) {
       if(s.length()==0)
       {
           return 0;
       }
        int lo=0, mx_freq = 0, mx_length = 1;
        unordered_map<char, int> alphabets; 
        for(int hi = 0; hi < s.length(); hi++) {
            int count = ++alphabets[s[hi]];
            mx_freq = max(mx_freq,count); 
            while(hi-lo+1 - mx_freq > k) {
                alphabets[s[lo]]--;
                lo++;
            }
            mx_length = max(mx_length, hi-lo+1);
        }
        return mx_length;
    }
};

#mx_freq -> count of most frequent character
#count -> count of current character
