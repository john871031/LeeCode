class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());
        int len1 = nums1.size();
        int len2 = nums2.size();
        vector<int> v1, v2;
        vector<vector<int>> ans;
        int i=0, j=0;
        
        while(i<len1 && j<len2){
            if(nums1[i]==nums2[j]){
                i++;
                j++;
                while(i<len1 && nums1[i]==nums1[i-1]) i++;
                while(j<len2 && nums2[j]==nums2[j-1]) j++;
            }else if(nums1[i]<nums2[j]){
                v1.push_back(nums1[i++]);
                while(i<len1 && nums1[i]==nums1[i-1]) i++;
            }else{
                v2.push_back(nums2[j++]);
                while(j<len2 && nums2[j]==nums2[j-1]) j++;
            }
        }
        while(i<len1){
            v1.push_back(nums1[i++]);
            while(i<len1 && nums1[i]==nums1[i-1]) i++;
        }
        while(j<len2){
            v2.push_back(nums2[j++]);
            while(j<len2 && nums2[j]==nums2[j-1]) j++;
        }
        ans.push_back(v1);
        ans.push_back(v2);
        return ans;
    }
};
