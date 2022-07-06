class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int i;
        int j;
        int k;
        int sum;
        int min = 100000;
        int dif;
        int ans;
        sort(nums.begin(), nums.end());
        for(i=0;i<nums.size()-2;i++){
            j=i+1;
            k=nums.size()-1;
            while(j<k){
                sum = nums[i]+nums[j]+nums[k];
                dif = abs(target - sum);
                if(dif < min){
                    min = dif;
                    ans = sum;
                }
                if(sum < target) j++;
                else k--;
            }
        }
        return ans;
    }
};
