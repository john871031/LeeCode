class Solution {
public:
    string addStrings(string num1, string num2) {
        
        reverse(num1.begin(), num1.end());
        reverse(num2.begin(), num2.end());
        int min_len = min(num1.size(), num2.size());
        string ans="";
        int carry=0;
        int num;
        for(int i=0; i<min_len; i++){
            num = (int)num1[i] - '0' + (int)num2[i] - '0' + carry;
            if(num>9){
                carry = num/10;
                num %= 10;
            }
            else carry = 0;
            ans.push_back((char)(num + '0'));
            // cout<<(char)(num + '0')<<endl;
        }
        if(num1.size()>min_len){
            for(int i=min_len;i<num1.size();i++){
                num = (int)num1[i] - '0' + carry;
                if(num>9){
                    carry = num/10;
                    num %= 10; 
                }
                else carry = 0;
                ans.push_back((char)(num + '0'));
                // cout<<(char)(num + '0')<<endl;
            }
        }else if(num2.size()>min_len){
            for(int i=min_len;i<num2.size();i++){
                num = (int)num2[i] - '0' + carry;
                if(num>9){
                    carry = num/10;
                    num %= 10; 
                }
                else carry = 0;
                ans.push_back((char)(num + '0'));
                // cout<<(char)(num + '0')<<endl;
            }
        }
        if(carry>0) ans.push_back((char)(carry + '0'));
        // cout<<(char)(carry + '0')<<endl;
        reverse(ans.begin(), ans.end());
        return ans;
    }
};
