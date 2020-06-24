#https://leetcode.com/problems/guess-number-higher-or-lower/

/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is lower than the guess number
 *			      1 if num is higher than the guess number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) {
        int lo=1,hi=n,mid,ans;
        while(lo<=hi)
        {
            if(guess(lo)==0){
                ans=lo;
                break;
            }
            if(guess(hi)==0){
                ans=hi;
                break;
            }   
            mid=(lo+(hi-lo)/2);
            if(guess(mid)==0){
                ans=mid;}
            if(guess(mid)<0)
                hi=mid-1;
            else
                lo=mid+1;
        }
        return ans;
    }
};
