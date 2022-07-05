class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int j;
        int k;
        int sum;
        vector<vector<int> > ans;
        sort(nums.begin(), nums.end());
        if(nums.size() < 3) return ans;
        for(int i=0; i<nums.size()-2;i++){
            if(i==0 || (i>0 && nums[i] != nums[i-1])) {
                j = i+1;
                k = nums.size()-1;
                
                while(j<k){
                    sum = nums[i] + nums[j] + nums[k];
                    if(sum > 0){
                        k--;
                    }
                    else if(sum < 0){
                        j++;
                    }
                    else if(sum == 0){
                        ans.push_back({nums[i],nums[j],nums[k]});
                        while(j<k && nums[j] == nums[j+1]) j++;
                        while(j<k && nums[k] == nums[k-1]) k--;

                        j++;
                        k--;
                    }    
                }
            }
        }
        return ans;
    }
};
