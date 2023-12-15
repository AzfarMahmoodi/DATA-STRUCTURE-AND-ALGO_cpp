Runtime
0
ms
Beats
100.00%
of users with C++
Memory
6.25
MB
Beats
85.44%
of users with C++


  class Solution {
public:

/*int sol(int n){
    if(n==0||n==1){
        return 1;
    }
    int ans=0;
    for(int i=1;i<=n;i++){
        ans=ans+sol(i-1)*sol(n-i);
    }
    return ans;
}*/
/*int sol(int n,vector<int>&dp){
    if(n==0||n==1){
        return 1;
    }
    int ans=0;
    if(dp[n]!=-1){
        return dp[n];
    }
    for(int i=1;i<=n;i++){
        ans=ans+sol(i-1,dp)*sol(n-i,dp);
        dp[n]=ans;
    }

    return dp[n];
}*/
int sol(int n){
    vector<int>dp(n+1,0);
    dp[0]=dp[1]=1;
    
    for(int i=2;i<=n;i++){
        for(int j=1;j<=i;j++){
        dp[i]=dp[i]+dp[j-1]*dp[i-j];
        
        }
    }

    return dp[n];
}

    int numTrees(int n) {
        
        return sol(n);
    }
};
