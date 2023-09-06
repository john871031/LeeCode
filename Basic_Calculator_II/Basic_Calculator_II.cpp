class Solution {
public:
    int calculate(string s) {
        vector<int> num;
        int i = 0;
        int integer = 0;
        char sign = '+';
        int ans = 0;
        // bool flag = false;
        for(int i=0;i<s.size();i++){
            if(isdigit(s[i])) integer = int(s[i]-'0') + integer*10;
            if(!isdigit(s[i]) && s[i] != ' ' || i==s.size()-1){
                if(sign=='+') num.push_back(integer);
                else if(sign=='-') num.push_back(0-integer);
                else{
                    int tmp;
                    int n = num.size()-1;
                    // cout<<num[n]<<integer<<endl;
                    if(sign=='*'){
                        tmp = num[n] * integer;
                    }else if(sign=='/'){
                        tmp = num[n] / integer;
                    }
                    num.pop_back();
                    num.push_back(tmp);
                }
                sign = s[i];
                integer = 0;
            }
        }
        while(!num.empty()){
            ans += num[num.size()-1];
            num.pop_back();
        }
        return ans;
    }
};
