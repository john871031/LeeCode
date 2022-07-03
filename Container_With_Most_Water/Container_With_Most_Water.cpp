class Solution {
public:
    int maxArea(vector<int>& height) {
        int i = 0;
        int j = height.size()-1;
        int max_area = 0;
        int tmp;
        while(i<j){
            tmp = (j-i) * min(height[i], height[j]);
            if(max_area < tmp) max_area = tmp;
            
            if(height[i] < height[j]) i++;
            else j--;
        }
        return max_area;
    }
};
