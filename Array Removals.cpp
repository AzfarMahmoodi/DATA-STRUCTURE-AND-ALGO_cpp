class Solution{
    public:
    int sol(vector<int>& arr, int k,int i,int j,int n,int count,vector<vector<int>> &dp){
        if(arr[j]-arr[i] <=k){
            return count;
            
        }
         if(dp[i][j]!=-1){
            return dp[i][j];
        }
        int inci=sol(arr,k,i+1,j,n,count+1,dp);
        
        int incj=sol(arr,k,i,j-1,n,count+1,dp);
            
            return dp[i][j]=min(inci,incj);
    }
    int removals(vector<int>& arr, int k){
        //Code here
        sort(arr.begin(),arr.end());
        int n=arr.size();
           vector<vector<int>> dp(arr.size(),vector<int> (arr.size(),-1));
        return sol(arr,k,0,n-1,n,0,dp);
    }
};
