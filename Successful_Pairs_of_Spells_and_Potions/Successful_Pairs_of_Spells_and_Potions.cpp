class Solution {
public:
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
        int len_sp = spells.size();
        int len_po = potions.size();
        vector<int> ans;
        sort(potions.begin(), potions.end());

        for(int i=0;i<len_sp;i++){
            int left = 0;
            int right = len_po;

            while(left<right){
                int mid = (left+right)/2;

                if((long)(spells[i])*potions[mid]<success){
                    left = mid+1;
                }else{
                    right = mid;
                }
            }
            ans.push_back(len_po-left);
        }
        return ans;
    }
};
