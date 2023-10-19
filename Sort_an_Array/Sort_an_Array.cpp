class Solution {
public:
    void MergeSort(vector<int>& nums, int left, int right){
        if(left<right){
            int mid = (left+right)/2;
            MergeSort(nums, left, mid);
            MergeSort(nums, mid+1, right);
            Merge(nums, left, mid, right);
        }
    }
    void Merge(vector<int>& nums, int left, int mid, int right){
        vector<int> tmp;
        int front1 = left;
        int end1 = mid;
        int front2 = mid+1;
        int end2 = right;
        while(front1<=end1 && front2<=end2){
            if(nums[front1]<=nums[front2]){
                tmp.push_back(nums[front1]);
                front1++;
            }else{
                tmp.push_back(nums[front2]);
                front2++;
            }
        }
        while(front1<=end1){
            tmp.push_back(nums[front1]);
            front1++;
        }
        while(front2<=end2){
            tmp.push_back(nums[front2]);
            front2++;
        }
        int t = 0;
        for(int i=left;i<=right;i++){
            nums[i] = tmp[t++];
        }
    }
    vector<int> sortArray(vector<int>& nums) {
        MergeSort(nums, 0, nums.size()-1);
        return nums;
    }

    //quicksort
    // int pivot(vector<int>& nums, int start, int end){
    //     int pindex = start;
    //     for(int i=start+1;i<=end;i++){
    //         if(nums[start]>nums[i]){
    //             pindex++;
    //             swap(nums[pindex], nums[i]);
    //         }
    //     }
    //     swap(nums[start], nums[pindex]);
    //     return pindex;
    // }
    // void quick(vector<int>& nums, int left, int right){
    //     if(left<right){
    //         int pindex = pivot(nums, left, right);
    //         quick(nums, left, pindex-1);
    //         quick(nums, pindex+1, right);
    //     }
    // }
    // vector<int> sortArray(vector<int>& nums) {
    //     quick(nums, 0, nums.size()-1);
    //     return nums;
    // }
};
