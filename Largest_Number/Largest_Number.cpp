class Solution {
public:
    static bool larger(int left, int right){
        string s1 = to_string(left);
        string s2 = to_string(right);
        return (s1+s2) > (s2+s1);
    }
    string largestNumber(vector<int>& nums) {
        string ans;
        sort(nums.begin(), nums.end(), larger);
        if(nums[0]==0) return "0";
        for(int i:nums){
            ans += to_string(i);
        }
        return ans;
    }
};
