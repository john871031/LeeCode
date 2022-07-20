class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        //finding first decreasing
        int i;
        int j;
        int index;
        int bigger=101;
        for(i=nums.size()-2;i>=0;i--){
            if(nums[i+1]>nums[i]){
                break;
            }
        }
        if(i == -1){    //
            reverse(nums.begin(), nums.end());
        }else{
            for(j=i+1;j<=nums.size()-1;j++){
                if((nums[j]-nums[i]>0) && bigger>(nums[j]-nums[i])){
                    bigger = nums[j]-nums[i];
                    index = j;
                }
            }

            swap(nums[i], nums[index]);
            sort(nums.begin()+i+1, nums.end());
        }
    }
};
