class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int time = 1;
        int start=0;
        int end=0;
        int check=0;
        if(nums.size()==1) return nums.size();
        for(int i=1;i<nums.size();i++){
            if(nums[i]==nums[i-1]) time += 1;
            if(time<=2 && nums[i]!=nums[i-1]) time = 1;
            if(time==3 && nums[i]==nums[i-1]) start = i;
            if(time>=3 && nums[i]!=nums[i-1]){
                end = i-1;
                time = 1;
                while(start<=end){
                    nums[start] = INT_MIN;
                    check++;
                    start++;
                }
            }
        }
        while(time>=3){
            nums[start] = INT_MIN;
            check++;
            start++;
            time--;
        }
        sort(nums.begin(), nums.end());
        // for(int i=0;i<nums.size();i++){
        //     cout<<nums[i]<<endl;
        // }
        // cout<<check<<endl;
        nums.erase(nums.begin(), nums.begin()+check);
        return nums.size();
    }
};
