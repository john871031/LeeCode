class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        for(int i=0;i<image.size();i++){
            reverse(image[i].begin(), image[i].end());
            for(int j=0;j<image.size();j++){
                image[i][j] = abs(image[i][j]-1);
            }
        }
        return image;

        // int len = image.size();
        // for(int i=0;i<len;i++){
        //     for(int j=0;j<=(len-1)/2;j++){
        //         int tmp = abs(image[i][j]-1);
        //         image[i][j] = abs(image[i][len-j-1]-1);
        //         image[i][len-j-1] = tmp;
        //     }
        // }
        // return image;
    }
};
