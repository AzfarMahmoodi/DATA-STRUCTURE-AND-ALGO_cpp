int MOD = 1000000007;
    long long int solve(string &s,int i, int j,vector<vector<long long int> > &dp){
        if(i>j)return 0;
        if(i==j)return 1;
        
        if(dp[i][j]!=-1)
          return dp[i][j];
        if(s[i]==s[j]){
            return dp[i][j] = (((solve(s,i+1,j,dp)%MOD + solve(s,i,j-1,dp)%MOD))%MOD + 1)%MOD;
        }
        else{
            return dp[i][j] = (solve(s,i+1,j,dp)%MOD + solve(s,i,j-1,dp)%MOD - solve(s,i+1,j-1,dp)%MOD+MOD)%MOD;
        }
    }
    long long int countPS(string str)
    {
        int n=str.length();
        vector<vector<long long int> > dp(n,vector<long long int> (n,-1));
       return solve(str,0,n-1,dp);
    }
     
};
