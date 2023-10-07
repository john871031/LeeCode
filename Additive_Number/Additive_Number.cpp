class Solution {
public:
    bool isAdditiveNumber(string num) {
        for(int i=1;i<num.size();i++){
            string s1 = num.substr(0,i);
            if(s1.size()>1 && s1[0]=='0') break;
            for(int j=i+1;j<num.size();j++){
                string s2 = num.substr(i, j-i);
                if(s2.size()>1 && s2[0]=='0') break;
                long  d1 = stol(s1);
                long  d2 = stol(s2);
                long next = d1 + d2;
                string s3 = to_string(next);
                if(s3!=num.substr(j, s3.size())) continue;
                string ans = s1+s2+s3;
                while(ans.size()<num.size()){
                    d1 = d2;
                    d2 = next;
                    next = d1 + d2;
                    s3 = to_string(next);
                    ans += s3;
                }
                cout<<ans<<endl;
                if(ans==num) return true;
            }
        }
        return false;
    }
};
