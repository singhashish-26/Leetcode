#https://leetcode.com/problems/bulls-and-cows/

class Solution {
public:
    string getHint(string secret, string guess) {
        int b=0,c=0;
        vector<int> sv(10,0);
        vector<int> gv(10,0);
        for(int i=0; i<secret.size(); i++)
        {
            if(secret[i]==guess[i])
                b++;
            else
            {
                sv[secret[i]-'0']++;
                gv[guess[i]-'0']++;
            }
        }
        for(int i=0; i<10; i++)
        {
            c+=min(sv[i],gv[i]);
        }
        return (to_string(b)+'A'+to_string(c)+'B');
    }
};
