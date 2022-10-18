class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector< vector<int> > ans(n,vector<int>(n));
        int count = 1;
        int dir = 1;
        int x = 0;
        int y = 0;
        int x_end = n-1;
        int y_end = n-1;
        while(count!=n*n+1){
            switch(dir){
                case 1:
                    for(int i=y;i<=y_end;i++){
                        ans[y][i] = count;
                        count++;
                    }
                    x++;
                    dir = 2;
                    break;
                case 2:
                    for(int i=x;i<=x_end;i++){
                        ans[i][y_end] = count;
                        count++;
                    }
                    y_end--;
                    dir = 3;
                    break;
                case 3:
                    for(int i=y_end;i>=y;i--){
                        ans[x_end][i] = count;
                        count++;
                    }
                    x_end--;
                    dir = 4;
                    break;
                case 4:
                    for(int i=x_end;i>=x;i--){
                        ans[i][y] = count;
                        count++;
                    }
                    y++;
                    dir = 1;
                    break;
            }
        }
        return ans;
    }
};
