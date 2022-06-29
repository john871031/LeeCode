class Solution {
public:
    string get_substr(string s, int left, int right){
        int s_len = s.length();
        int len;
        int diff = right - left;
        if(diff==2){
            len = 1;
        }else{
            len = 0;
        }
        while(left>=0 && right<=s_len){
            if(s[left]!=s[right]){
                break;
            }
            len += 2;
            left--;
            right++;
        }
        return s.substr(left+1, len);
    }
    string longestPalindrome(string s) {
        int s_len = s.length();
        int max=1;
        string max_s;
        if(s_len == 1){
            return s;
        }
        for(int i=1;i<s_len;i++){
            string substr_odd = get_substr(s, i-1, i+1);
            int substr_odd_len = substr_odd.length();
            if(substr_odd_len > max){
                max = substr_odd_len;
                max_s = substr_odd;
            }
        }
        for(int i=0;i<s_len;i++){
            string substr_even = get_substr(s, i, i+1);
            int substr_even_len = substr_even.length();
            if(substr_even_len > max){
                max = substr_even_len;
                max_s = substr_even;
            }
        }
        if(max==1){
            max_s = s[0];
        }
        return max_s;
    }
};
