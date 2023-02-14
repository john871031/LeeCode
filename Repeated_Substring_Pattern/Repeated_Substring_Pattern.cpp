class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        int len = s.size();
        int start = 2;
        // cout<<len<<endl;
        while(start<=len){
            int count = 0;
            if(len%start==0){
                for(int i=0;i<start-1;i++){
                    if(s.substr(0,len/start)==s.substr((i+1)*(len/start),len/start)) count++;
                    // cout<<s.substr(0,len/start)<<endl;
                    // cout<<s.substr((i+1)*(len/start),len/start)<<endl;
                    // cout<<count<<endl;
                }
            }
            if(count==start-1) return true;
            start++;
        }
        
        return false;
    }
};
