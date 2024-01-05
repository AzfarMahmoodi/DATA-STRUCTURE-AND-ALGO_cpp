  bool sol(string A, string B, string C,int n,int m,int k,vector<vector<int>>&dp){
       if(k==0){
           return 1;
       }
       if(dp[n][m]!=-1){
           return dp[n][m];
       }
       int a=0,b=0;
       if(n-1>=0 && A[n-1]==C[k-1]){
         a=sol(A,B,C,n-1,m,k-1,dp);
       }
       if(m-1>=0 && B[m-1]==C[k-1]){
           b=sol(A,B,C,n,m-1,k-1,dp);
       }
       return dp[n][m]=a||b;
       
   }
    /*You are required to complete this method */
    bool isInterleave(string A, string B, string C) 
    {
        //Your code here
        int n=A.length();
        int m=B.length();
        int k=C.length();
        vector<vector<int>>dp(n+1,vector<int>(m+1,-1));
        
        if((n+m)!=k){
            return 0;
        }
        else{
            return sol(A,B,C,n,m,k,dp);
        }
    }
