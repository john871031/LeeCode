class Solution {
public:
    int binaryGap(int n) {
        bitset<32> b(n);
        int ans = 0;
        bool flag = false;
        int start = -1;
        for(int i=0;i<32;i++){
            if(!flag && b[i]==1){
                start = i;
                flag = true;
            }
            if(flag && b[i]==1){
                ans = max(ans, i-start);
                start = i;
            }
        }
        return ans;

        // int ans = 0;
        // int start = -1;
        // for(int i=0;i<32;i++){
        //     if((n>>i)&1){
        //         if(start!=-1) ans = max(ans, i-start);
        //         start = i;
        //     }
        // }
        // return ans;
    }
};
