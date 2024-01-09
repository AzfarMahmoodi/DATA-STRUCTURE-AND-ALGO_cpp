class Solution {
public:
void sol(vector<vector<int>>& image, int x, int y, int color,int original){
    int row=image.size();
    int col=image[0].size();
    if(image[x][y]==original){
        image[x][y]=color;
        //left
        if((y-1>=0)&&(image[x][y-1]==original)){
            sol(image,x,y-1,color,original);
        }

        //right
        if((y+1<col)&&(image[x][y+1]==original)){
            sol(image,x,y+1,color,original);
        }
        //up
        if((x-1>=0)&&(image[x-1][y]==original)){
            sol(image,x-1,y,color,original);
        }
        //down
        if((x+1<row)&&(image[x+1][y]==original)){
            sol(image,x+1,y,color,original);
        }
        return;
    }
}
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int original=image[sr][sc];
        if(original==color){
            return image;
        }
        sol(image,sr,sc,color,original);
        return image;
    }
};
