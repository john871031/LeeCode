class Solution {
public:
    int findShortestSubArray(vector<int>& nums) {
        unordered_map<int, int> mp;
        int max = INT_MIN;
        int min_len = INT_MAX;
        vector<int> arr;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]] += 1;
            if(mp[nums[i]]>max){
                max = mp[nums[i]];
                arr.clear();
                arr.push_back(nums[i]);
            }else if(mp[nums[i]]>=max){
                arr.push_back(nums[i]);
            }
        }
        if(max==1) return max;
        for(int i=0;i<arr.size();i++){
            int tmp = 0;
            int tmp_len = 0;
            int j = 0;
            while(tmp<mp[arr[i]]){
                if(nums[j]==arr[i]){
                    tmp += 1;
                }
                if(tmp>=1 && tmp<=mp[arr[i]]){
                    tmp_len += 1;
                }
                j++;
            }
            if(tmp_len<min_len) min_len = tmp_len;
        }
        return min_len;
    }
};
