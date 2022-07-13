class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        if(m==0 && n!=0){
            for(int j=0;j<n;j++){
                nums1[j] = nums2[j];
            }
        }else if(m!=0){
            for(int i=0;i<n;i++){
                nums1[m+i] = nums2[i];
            }
            sort(nums1.begin(), nums1.end());
        }
        
    }
};
