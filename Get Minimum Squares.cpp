Problem Solved Successfully
You get marks only for the first correct submission if you solve the problem without viewing the full solution.
Test Cases Passed: 
210 /210
Your Total Score: 
66
Total Time Taken: 
0.04
Correct Submission Count: 
3



class Solution{
    /*int sol(int n){
        if(n==0){
            return 1;
        }
        if(n<0){
            return 0;
        }
        int ans=n;
        for(int i=1;i*i<=n;i++){
            int temp=i*i;
            ans=min(1+sol(n-temp),ans);
            
        }
        return ans;
    }*/
   /* int sol(int n,vector<int>&dp){
        if(n==0){
            return 0;
        }
        
        if(dp[n]!=-1){
            return dp[n];
        }
        int ans=n;
        for(int i=1;i*i<=n;i++){
            int temp=i*i;
            
            ans=min(1+sol(n-temp,dp),ans);
            
        }
        dp[n]=ans;
        return dp[n];
    }
    */
    int sol(int n){
        vector<int>dp(n+1,INT_MAX);
        dp[0]=0;
        
        for(int j=1;j<=n;j++){
        for(int i=1;i*i<=n;i++){
            
            int temp=i*i;
            if(j-temp>=0){
            dp[j]=min(dp[j],dp[j-temp]+1);
            }
        }
        }
        return dp[n];
    }
	public:
	int MinSquares(int n)
	{
	    
	    return sol(n);
	}
};
