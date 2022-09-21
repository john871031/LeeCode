class Solution {
public:
    int jump(vector<int>& nums) {
        int ans=0;
        int i = 0;
        int max = 0;
        int index;
        while(i!=nums.size()-1){
            max=0;
            for(int j=1;j<=nums[i];j++){
                if((i+j)==nums.size()-1){
                    return ans+1;
                }
                int tmp = j+nums[i+j];
                if(tmp>max){
                    max = tmp;
                    index = j;
                } 
            }
            i += index;
            ans++;
        }    
    return ans;
    }
};
