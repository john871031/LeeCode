class Solution {
public:
    bool check(vector<int>& arr, int start, vector<bool>& mark){
        if(start<0 || start>=arr.size()) return false;
        if(mark[start]==true) return false;
        if(arr[start]==0) return true;
        mark[start] = true;
        
        return check(arr, start-arr[start], mark) || check(arr, start+arr[start], mark);
    }
    bool canReach(vector<int>& arr, int start) {
        vector<bool> mark(arr.size(), false);
        return check(arr, start, mark);
    }
};
