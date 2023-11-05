class Solution {
public:
    int getWinner(vector<int>& arr, int k) {
        int win = 1;
        int cur = max(arr[0], arr[1]);
        if(win==k) return cur;
        for(int i=2;i<arr.size();i++){
            if(cur>arr[i]){
                win++;
            }else{
                cur = arr[i];
                win = 1;
            }
            if(win==k){
                return cur;
            }
        }
        return cur;
    }
};
