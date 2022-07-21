class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int len_1 = nums1.size();
        int len_2 = nums2.size();
        int i = 0;
        int j = 0;
        
        vector<int> ans;
        while(i<len_1 || j<len_2){
            if(i==len_1){
                ans.push_back(nums2[j++]);
            }else if(j==len_2){
                ans.push_back(nums1[i++]);
            }else if(nums1[i]==nums2[j]){
                ans.push_back(nums1[i++]);
                ans.push_back(nums2[j++]);
            }else if(nums1[i]>nums2[j]){
                ans.push_back(nums2[j++]);
            }else{
                ans.push_back(nums1[i++]);
            }
        }
        
        int right = len_1 + len_2 - 1;
        
        if(right%2==0){
            return ans[right/2];
        }
        
        double z;
        z = ans[right/2]+ans[right/2+1];

        return z/2;
    }
};
