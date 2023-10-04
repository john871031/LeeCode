class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        vector<int> v;
        v.push_back(nums[0]);
        for(int i=1;i<nums.size();i++){
            int num = nums[i];
            if(num>v.back()){
                v.push_back(num);
            }else{
                *lower_bound(v.begin(), v.end(), num) = num;
                // cout<<v.size()<<endl;
            }
        }
        return v.size();
    }
};
