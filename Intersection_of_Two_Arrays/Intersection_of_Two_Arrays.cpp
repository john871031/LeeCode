class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());
        int j=0;
        vector<int> ans;
        
        for(int i=0;i<nums1.size();i++){
            while(nums1[i]>=nums2[j]){
                if((nums1[i]==nums2[j] && ans.size()==0) || (nums1[i]==nums2[j] && nums2[j]!=ans.back()) ){
                    ans.push_back(nums1[i]);
                    j++;
                    if(j==nums2.size()) return ans;
                    break;
                }
                j++;
                if(j==nums2.size()) return ans;
            }            
        }
        return ans;
    }
};
