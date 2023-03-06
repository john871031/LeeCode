class Solution {
public:
    string reverseStr(string s, int k) {
        int n = s.size();
        int i = 0;
        if(n<k){
            reverse(s.begin(), s.end());
            return s;
        }
        while(i<n && i+k<=n){
            reverse(s.begin()+i, s.begin()+(i+k));
            cout<<s<<endl;
            i += 2*k;
        }
        if(i+k>n){
            reverse(s.begin()+i, s.end());
            return s;
        }
        return s;
    }
};
