class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        int m=image.size(),n=image[0].size(),val=image[sr][sc];
        if(val==newColor)
            return image;
        image[sr][sc]=newColor;
        if(sr+1<m&&val==image[sr+1][sc])
            floodFill(image,sr+1,sc,newColor);
        if(sr-1>=0&&val==image[sr-1][sc])
            floodFill(image,sr-1,sc,newColor);
         if(sc+1<n&&val==image[sr][sc+1])
            floodFill(image,sr,sc+1,newColor);
        if(sc-1>=0&&val==image[sr][sc-1])
            floodFill(image,sr,sc-1,newColor);
        return image;
    }
};
