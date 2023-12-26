int sol(int arr[], int n,int index,int prev,vector<vector<int>>&dp){
	    if(index>=n){
	        return 0;
	    }
	    if(dp[index][prev+1]!=-1){
	        return dp[index][prev+1];
	    }
	    int inc=0;
	    if(abs(arr[index]-arr[prev])==1||prev==-1){
	        inc=1+sol(arr,n,index+1,index,dp);
	        
	    }
	    int exc=0+sol(arr,n,index+1,prev,dp);
	    return dp[index][prev+1]=max(inc,exc);
	}
    int longestSubsequence(int N, int A[])
    {
        // code here
         vector<vector<int>>dp(N+1,vector<int>(N+1,-1));
	    return sol(A,N,0,-1,dp);
	} 
