class Solution {
public:
    string countAndSay(int n) {
        if(n==1) return "1";
        else if(n==2) return "11";
        string tmp = countAndSay(n-1);
        char check = tmp[0];
        string ans;
        int num = 1;
        for(int i=1;i<tmp.length();i++){
            if(tmp[i]==check){
                num++;
            }else{
                ans += to_string(num);
                ans += check;
                check = tmp[i];
                num = 1;
            }
        }
        ans += to_string(num);
        ans += check;
        return ans;
    }
};
