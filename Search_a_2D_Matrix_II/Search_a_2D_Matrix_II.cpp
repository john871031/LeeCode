class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int start = 0;
        int end = matrix[0].size()-1;
        while(start<matrix.size() && end>=0){
            if(matrix[start][end]==target) return true;
            else if(matrix[start][end]<target) start++;
            else end--;
        }
        
        return false;
    }
};
