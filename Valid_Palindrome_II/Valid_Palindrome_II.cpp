class Solution {
public:
    bool check(string s, int left, int right, int count){
        if(count>1) return false;
        while(left<right){
            if(s[left]==s[right]){
                left++;
                right--;
            }else{
                return check(s, left, right-1, count+1) || check(s, left+1, right, count+1);
            }
        }
        return true;
    }
    bool validPalindrome(string s) {
        int start = 0;
        int end = s.size()-1;
        return check(s, start, end, 0);
    }
};
