class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        map<int, int> mymap;
        int ans = 1;
        int max = INT_MIN;
        if(nums.size()==0) return 0;
        for(int i=0;i<nums.size();i++){
            mymap[nums[i]] = 1;
        }
        auto pre = mymap.begin()->first;
        for(auto x: mymap){
            if(x.first==pre+1) ans += 1;
            else ans = 1;
            pre = x.first;
            if(ans>max) max = ans;
        }
        return max;
    }
};
