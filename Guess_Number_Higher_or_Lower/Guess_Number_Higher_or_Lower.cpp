/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) {
        long right=n;
        long left=1;
        
        while(left<=right){
            long mid = (right+left)/2;
            int check = guess(mid);
            if(check==0) return mid;
            else if(check<0){
                right = mid-1;
            }else{
                left = mid+1;
            }
        }
        return -1;
    }
};
