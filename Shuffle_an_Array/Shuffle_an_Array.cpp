class Solution {
public:
    vector<int> v;
    Solution(vector<int>& nums) :v(nums){
        
    }
    
    vector<int> reset() {
        return v;
    }
    
    vector<int> shuffle() {
        vector<int> ans = v;
        for(int i=0;i<ans.size();i++){
            int index = i+rand()%(ans.size()-i);
            swap(ans[i], ans[index]);
        }
        return ans;
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(nums);
 * vector<int> param_1 = obj->reset();
 * vector<int> param_2 = obj->shuffle();
 */
