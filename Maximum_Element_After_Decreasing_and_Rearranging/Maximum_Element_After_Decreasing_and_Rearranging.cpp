class Solution {
public:
    int maximumElementAfterDecrementingAndRearranging(vector<int>& arr) {
        int len = arr.size();
        if(len<=1) return 1;
        sort(arr.begin(), arr.end());
        arr[0] = 1;
        for(int i=1;i<len;i++){
            if(abs(arr[i]-arr[i-1])>1) arr[i] = arr[i-1] + 1;
        }
        return arr[len-1];
    }
};
