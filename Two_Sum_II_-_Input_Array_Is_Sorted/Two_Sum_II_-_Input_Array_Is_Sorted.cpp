class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int tmp;
        vector<int> ans;
        for(int i=0;i<numbers.size();i++){
            tmp = target - numbers[i];
            if(i>0 && numbers[i]==numbers[i-1]) continue;
            for(int j=i+1;j<numbers.size();j++){
                if(numbers[j]>tmp) break;
                else if(numbers[j]==tmp){
                    ans.push_back(i+1);
                    ans.push_back(j+1);
                }    
            }
            if(!ans.empty()) break;
        }
        return ans;
    }
};
