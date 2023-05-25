class Solution {
public:
    void trace(vector<vector<int>>& image, int sr, int sc, int color, int target){
        if(sr<0 || sr>=image.size() || sc<0 || sc>=image[0].size() || image[sr][sc]==color || image[sr][sc]!=target) return;
        // cout<<sr<<' '<<sc<<endl;
        image[sr][sc] = color;
        trace(image, sr-1, sc, color, target);
        trace(image, sr+1, sc, color, target);
        trace(image, sr, sc-1, color, target);
        trace(image, sr, sc+1, color, target);
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int target = image[sr][sc];
        // cout<<image.size()<<endl;
        // cout<<image[0].size()<<endl;
        trace(image, sr, sc, color, target);
        return image;    
    }
};
