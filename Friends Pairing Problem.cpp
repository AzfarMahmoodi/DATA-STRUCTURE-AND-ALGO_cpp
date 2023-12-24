





public:
 long long int mod = 1000000007;
/*int sol(int n,vector<int>&dp){
    
    if(dp[n]!=-1){
        return dp[n];
    }
      dp[n] = ((sol(n-1,dp))%mod + 1LL*(n-1)*((sol(n-2,dp))%mod))%mod;
    return dp[n];
}*/
int sol(int n){
     vector<int>dp(n+1,0);
     if(n==1){
        return 1;
    }
    if(n==2){
        return 2;
    }
    int prev=1;
    int cur=2;
    int next;
    for(int i=3;i<=n;i++){
      next = (cur%mod + 1LL*(i-1)*((prev)%mod))%mod;
        prev=cur;
        cur=next;
    }
    return cur;
}

    int countFriendsPairings(int n) 
    { 
        // code here
       
        return sol(n);
    }
