You are better than
99.9%
Runtime
17ms

/*int sol(int n, vector<int> &days, vector<int> &cost,int index,vector<int>&dp){
    if(index>=n){
        return 0;
    }
    if(dp[n]!=-1){
        return dp[n];
    }
    int a=sol(n,days,cost,index+1,dp)+cost[0];
    int i;
    for(i=index;i<n&&days[i]<days[index]+7;i++);
    int b=sol(n,days,cost,i,dp)+cost[1];
    for(i=index;i<n&&days[i]<days[index]+30;i++);
    int c=sol(n,days,cost,i,dp)+cost[2];
    dp[index]=min(a,min(b,c));
    return dp[index];
}
*/
int sol(int n, vector<int> &days, vector<int> &cost){  
    vector<int>dp(n+1,INT_MAX);
    
    dp[n]=0;
    for (int index = n - 1; index >= 0; index--) {
      int a = dp[index + 1] + cost[0];
      int i;
      for (i = index; i < n && days[i] < days[index] + 7; i++)
        ;
      int b = dp[i] + cost[1];
      for (i = index; i < n && days[i] < days[index] + 30; i++)
        ;
      int c = dp[i] + cost[2];
      dp[index] = min(a, min(b, c));
    }
    return dp[0];
}
int minimumCoins(int n, vector<int> days, vector<int> cost)
{
    // Write your code here.
  
   return  sol(n,days,cost);
}
