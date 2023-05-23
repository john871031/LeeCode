class Solution {
public:
    bool check(int num){
        int r;
        int tmp = num;
        while(tmp!=0){
            r = tmp%10;
            if(r==0) return false;
            if(num%r!=0) return false;
            tmp /= 10;
        }
        return true;
    }
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> ans;
        for(int i=left;i<=right;i++){
            if(check(i)) ans.push_back(i);
        }
        return ans; 
    }
};
