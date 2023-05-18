class Solution {
public:
    int findMin(vector<int>& nums) {
        int left = 0;
        int right = nums.size()-1;
        int mid;
        int min_tmp = INT_MAX;
        int ans = INT_MAX;
        if(nums.size()==1) return nums[0];
        while(left<right){
            mid = (left+right)/2;
            min_tmp = min(min(nums[left], nums[right]), nums[mid]);
            if(nums[left]==min_tmp){
                right = mid-1;
            }else if(nums[right]==min_tmp){
                left = mid+1;
            }else{
                if(nums[mid-1]<nums[mid+1]) right = mid-1;
                else left = mid+1;
            }
            ans = min(ans, min_tmp);
        }
        return ans;
    }
};
