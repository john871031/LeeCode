class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int k=0;
        while(k!=nums.size()){
            if(nums[k]==val) nums.erase(nums.begin()+k);
            else k++;
        }
        
        return k;
    }
};
