class Solution {
public:
    int maxRotateFunction(vector<int>& nums) {
        // int len = nums.size();
        // vector<int> v(len);
        // for(int i=0;i<len;i++){
        //     int count = 0;
        //     int j = i;
        //     while(count<len){
        //         v[count] += (nums[i]*j);
        //         count++;
        //         j++;
        //         j %= len;
        //     }
        // }
        // int ans = INT_MIN;
        // for(int i=0;i<v.size();i++){
        //     ans = max(ans, v[i]);
        // }
        // return ans;

        int f = 0;
        int len = nums.size();
        int sum = 0;
        for(int i=0;i<len;i++){
            sum += nums[i];
            f += i*nums[i];
        }
        int ans = f;
        for(int i=1;i<len;i++){
            f = f + sum - len*nums[len-i];
            ans = max(ans, f);
        }
        return ans;
    }
};
