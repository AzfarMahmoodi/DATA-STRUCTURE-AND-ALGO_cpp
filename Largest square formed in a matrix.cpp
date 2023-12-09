class Solution{
    /*int sol(int col,int row, vector<vector<int>>&mat,int &maxi,vector<vector<int>>&dp){
        
        if(row>=mat.size()||col>=mat[0].size()){
            return 0 ;
        }
        if(dp[row][col]!=-1){
            return dp[row][col];
        }
        
        int r=sol(col+1,row,mat,maxi,dp);
        int c=sol(col,row+1,mat,maxi,dp);
        int d=sol(col+1,row+1,mat,maxi,dp);
        
        if(mat[row][col]==1){
            dp[row][col]=1+min(r,min(c,d));
            maxi=max(maxi,dp[row][col]);
            return dp[row][col];
        }
        else{
            return dp[row][col]=0;
        }
        
    }
    */
    
/*int sol(int n,int m,vector<vector<int>>&mat,int &maxi){
        vector<vector<int>>dp(mat.size()+1,vector<int>(mat[0].size()+1,0));
     

        for(int row=mat.size()-1;row>=0;row--){
            for(int col=mat[0].size()-1;col>=0;col--){
                
        
        int r=dp[col+1][row];
        int c=dp[col][row+1];
        int d=dp[col+1][row+1];
        
        if(mat[row][col]==1){
            dp[row][col]=1+min(r,min(c,d));
            maxi=max(maxi,dp[row][col]);

        }
        else{
            dp[row][col]=0;
        }
    }
        }
        return dp[0][0];
        
    }*/
    void sol(vector<vector<int>> &mat,int & maxi)
    {
        int row=mat.size();
        int coloumn =mat[0].size();
       
       
        
        for(int i =row-1;i>=0;i--){
            for(int j =coloumn-1;j>=0;j--){
                
               
                
                if(mat[i][j]==1 && i<row-1&& j<coloumn-1){
                    
                    mat[i][j]=1+min(mat[i+1][j],min(mat[i][j+1],mat[i+1][j+1]));
                    
                }
                maxi=max(mat[i][j],maxi);
            }
         
        }
        
    }


public:
    int maxSquare(int n, int m, vector<vector<int>>mat){
        // code here
        
        int maxi=0;
         sol(mat,maxi);
        return maxi;
    }
};
