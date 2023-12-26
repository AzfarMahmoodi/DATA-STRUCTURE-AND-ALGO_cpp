class Solution{
public:
   /* int sol(int N, vector<vector<int>> Matrix,int row,int col, vector<vector<int>>&dp){
          //if(row==Matrix.size()) return Matrix[row][col];
        if( row==Matrix.size()|| col==Matrix[0].size()){
            return 0;
        }
        if(dp[row][col]!=-1){
            return dp[row][col];
        }
        int a=Matrix[row][col]+sol(N,Matrix,row+1,col,dp);
        
        int b=Matrix[row][col]+sol(N,Matrix,row+1,col-1,dp);
        int c=Matrix[row][col]+sol(N,Matrix,row+1,col+1,dp);
        
        return dp[row][col]=max(a,max(b,c));
    }
    */
    int sol(int N, vector<vector<int>> Matrix){
        
        

    
         int n=Matrix.size();

    int m=Matrix[0].size();
    vector<vector<int>>dp(n,vector<int>(m,0));
        for(int row=1;row<n;row++){
            for(int col=0;col<m;col++){
                int a=0,b=0,c=0;
                if(row+1<n)
                 a=Matrix[row][col]+dp[row+1][col];
                 if(row+1<n && col-1>=0)
                  b=Matrix[row][col]+dp[row+1][col-1];
                 if(row+1<n && col+1<m)
                 c=Matrix[row][col]+dp[row+1][col+1];
        
        return dp[row][col]=max(a,max(b,c));
            }
        }
     int ans=INT_MIN;

    for(int i=0;i<m;i++)

        ans=max(ans,dp[n-1][i]);

 

    return ans;
    }
    
    int maximumPath(int N, vector<vector<int>> Matrix)
    {
        // code here
      // vector<vector<int>>dp(N+1,vector<int>(N+1,-1));
     return sol(N,Matrix);   
    }
};
