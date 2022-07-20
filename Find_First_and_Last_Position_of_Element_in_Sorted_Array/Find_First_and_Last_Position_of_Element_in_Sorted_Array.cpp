class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int left=0;
        int right=nums.size()-1;
        int mid=-1;
        int start=-1;
        int end=-1;
        vector<int> ans;
        while(left<=right){
            mid = (left+right)/2;
            if(nums[mid]==target){
                start = mid;
                right = mid-1;
            }
            else if(nums[mid]>target) right = mid-1;
            else left = mid+1;
        }
        
        left=0;
        right=nums.size()-1;
        while(left<=right){
            mid = (left+right)/2;
            if(nums[mid]==target){
                end = mid;
                left = mid+1;
            }
            else if(nums[mid]>target) right = mid-1;
            else left = mid+1;
        }
        
        ans.push_back(start);
        ans.push_back(end);
        return ans;
    }
};
