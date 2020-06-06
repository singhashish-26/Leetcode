#https://leetcode.com/problems/1-bit-and-2-bit-characters/

class Solution {
public:
    bool isOneBitCharacter(vector<int>& bits) {
        int f=1;
        for(int i=0; i<bits.size(); i++)
        {
            if(bits[i]==0)
                f=1;
            else
            {
                i++;
                f=0;
            }
        }
        return f;
    }
};
