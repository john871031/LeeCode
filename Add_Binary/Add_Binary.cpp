class Solution {
public:
    string addBinary(string a, string b) {
        int len_a = a.size()-1;
        int len_b = b.size()-1;
        int carry = 0;
        int str_a;
        int str_b;
        int sum;
        string ans = "";
        while(len_a>=0 || len_b>=0 || carry){
            str_a = len_a>=0 ? a[len_a--] - '0' : 0;
            str_b = len_b>=0 ? b[len_b--] - '0' : 0;
            sum = str_a + str_b + carry;
            ans = to_string(sum%2) + ans;
            carry = sum/2;
        }
        return ans;
    }
};
