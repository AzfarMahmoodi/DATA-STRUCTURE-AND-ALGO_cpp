
#define MOD 1000000007
#include <bits/stdc++.h>
/*long long int solve(int n){
    if(n==1){
        return 0;

    }
    if(n==2){
        return 1;
    }
    long long int ans=((n-1)*((solve(n-2)%MOD)+(solve(n-1)%MOD))%MOD);
    return ans;
}*/
/*long long int solve(int n,vector<long long int>&dp){
    if(n==1){
        return 0;

    }
    if(n==2){
        return 1;
    }
    if (dp[n] != -1) {
        return dp[n];
    }
    dp[n] = ((n - 1) * ((solve(n - 2,dp) % MOD) + (solve(n - 1,dp) % MOD)) % MOD);
    return dp[n];
}*/
/*long long int solve(int n){
    vector<long long int>dp(n+1,-1);
    dp[1]=0;

    dp[2]=1;
    for (int i = 3; i <= n; i++) {
      dp[i] = ((i - 1) * ((dp[i - 2] % MOD) + (dp[i - 1] % MOD)) % MOD);
    }
    return dp[n];
}*/
long long int solve(int n){
    
    long long int prev1=0;

    long long int prev2=1;
    
    for (int i = 3; i <=n; i++) {
      long long int ans = (prev1 % MOD) + (prev2 % MOD);
      long long int sum=((i - 1) *ans)%MOD;
      prev1=prev2;
      prev2=sum;

    }
    return prev2;
}
long long int countDerangements(int n) {
    return solve(n);
}
