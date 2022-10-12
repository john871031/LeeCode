class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> ans;
        int len=(matrix.size())*(matrix[0].size());
        int m=0;
        int n=0;
        int m_end=matrix.size()-1;
        int n_end=matrix[0].size()-1;
        int dir=1;
        while(ans.size()<len){
            switch(dir){
                case 1:
                    for(int i=n;i<=n_end;i++){
                        ans.push_back(matrix[m][i]);
                    }
                    m++;
                    dir=2;
                    break;
                case 2:
                    for(int i=m;i<=m_end;i++){
                        ans.push_back(matrix[i][n_end]);
                    }
                    n_end--;
                    dir=3;
                    break;
                case 3:
                    for(int i=n_end;i>=n;i--){
                        ans.push_back(matrix[m_end][i]);
                    }
                    m_end--;
                    dir=4;
                    break;
                case 4:
                    for(int i=m_end;i>=m;i--){
                        ans.push_back(matrix[i][n]);
                    }
                    n++;
                    dir=1;
                    break;
            }
        }
        return ans;
    }
};
