class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        long tmp;
        int k;
        int z;
        long sum;
        vector< vector<int> > ans;
        
        sort(nums.begin(), nums.end());
        if(nums.size()<4) return ans;
        for(int i=0; i<nums.size()-3; i++){
            tmp = target - nums[i];
            if(i==0 || (i>0 && nums[i]!=nums[i-1])){
                //3sum
                for(int j=i+1;j<nums.size()-2;j++){
                    if(j==i+1 || (j>1 && nums[j]!=nums[j-1])){
                        k = j+1;
                        z = nums.size()-1;

                        while(k<z){
                            sum = nums[j] + nums[k];
                            sum += nums[z];
                            if(sum < tmp) k++;
                            else if(sum > tmp) z--;
                            else if(sum == tmp){
                                ans.push_back({nums[i],nums[j],nums[k],nums[z]});
                                while(k<z && nums[k] == nums[k+1]) k++;
                                while(k<z && nums[z] == nums[z-1]) z--;
                                k++;
                                z--;
                            }
                        }
                    }
                }    
            }
            
        }
        return ans;
    }
};
