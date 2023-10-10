class Solution {
public:
    vector<int> fairCandySwap(vector<int>& aliceSizes, vector<int>& bobSizes) {
        vector<int> ans;
        int num_a = 0;
        int num_b = 0;
        unordered_map<int, int> mp_a;
        unordered_map<int, int> mp_b;
        for(int i=0;i<aliceSizes.size();i++){
            mp_a[aliceSizes[i]]++;
            num_a += aliceSizes[i];
        }
        for(int i=0;i<bobSizes.size();i++){
            mp_b[bobSizes[i]]++;
            num_b += bobSizes[i];
        }
        // int target = (num_a + num_b)/2;
        for(int i=0;i<aliceSizes.size();i++){
            if(mp_b[(num_b-num_a+2*aliceSizes[i])/2]){
                ans.push_back(aliceSizes[i]);
                ans.push_back((num_b-num_a+2*aliceSizes[i])/2);
                break;
            }
        }
        return ans;
    }
};
