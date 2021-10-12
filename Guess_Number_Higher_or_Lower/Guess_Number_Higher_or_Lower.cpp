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
      
       int l=1,r=n;
        while(1){
            int mid=l+(r-l)/2;
            int h=guess(mid);
            if(h==0)
                return mid;
            if(h==1)
                l=mid+1;
            else
                r=mid-1;
        }
        return 0;
    }
};
