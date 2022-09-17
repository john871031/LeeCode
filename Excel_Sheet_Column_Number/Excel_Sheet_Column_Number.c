class Solution {
public:
    int titleToNumber(string columnTitle) {
        int ans = 0;
        int j=0;
        for(int i=columnTitle.size()-1;i>=0;i--){
            ans += (int(columnTitle[i])-64)*pow(26, j++);
        }
        return ans;
    }
};
