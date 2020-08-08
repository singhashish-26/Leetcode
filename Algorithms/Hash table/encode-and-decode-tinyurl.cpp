#https://leetcode.com/problems/encode-and-decode-tinyurl/

class Solution {
public:
    unordered_map<string,string> m;
    int i=0;
    // Encodes a URL to a shortened URL.
    string encode(string longUrl) {
        m[to_string(i)]=longUrl;
        return "http://tinyurl.com/" + to_string(i++);
    }

    // Decodes a shortened URL to its original URL.
    string decode(string shortUrl) {
        string pos= shortUrl.substr(19, shortUrl.size());
        if(m[pos]!="")
            return m[pos];
        else
            return "";
    }
};

// Your Solution object will be instantiated and called as such:
// Solution solution;
// solution.decode(solution.encode(url));
