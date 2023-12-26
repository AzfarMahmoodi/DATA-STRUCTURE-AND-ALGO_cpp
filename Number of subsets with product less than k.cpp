class Solution {
  public:
  int sol(int arr[], int n,int i,vector<vector<int>>&dp,int k){
	    if(i>=n){
	        if(k>0){
	            return 1;
	        }
	        return 0;
	    }
	    
	    if(dp[i][k]!=-1){
	        return dp[i][k];
	    }
	    
	    int take = 0;
        if(arr[i] <= k){
            take = sol(arr,n,i+1,dp, k/arr[i]);
        }
        
        int skip = sol( arr, n,i+1,dp, k);
        
        return dp[i][k]=skip+take;
	}
    int numOfSubsets(int arr[], int N, int K) {
        // code here
       vector<vector<int>>dp(N+1,vector<int>(K+1,-1));
	    return sol(arr,N,0,dp,K)-1;
    }
};
