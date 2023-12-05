You are better than
59.85%
Runtime
23 ms

#include <bits/stdc++.h> 
/*int solve(vector<int>&dp,int x,vector<int>&num){
    if(x==0){
        return 0;
    }
    if(x<0){
        return INT_MAX;
    }
    if(dp[x]!=-1){
        return dp[x];
    }
    int mini=INT_MAX;
    for(int i=0;i<num.size();i++){
        int ans=solve(dp,x-num[i],num);
        if(ans!=INT_MAX){
            mini=min(mini,ans+1);
        }
    }
    dp[x]=mini;
    return dp[x];
}*/
int solve1(int x,vector<int>&num){
    vector<int>dp(x+1,INT_MAX);
    dp[0]=0;
    for(int i=0;i<=x;i++){
        for(int j=0;j<num.size();j++){
            if(i-num[j]>=0 &&dp[i-num[j]]!=INT_MAX)
                dp[i]=min(dp[i],1+dp[i-num[j]]);
        }
    }
    if(dp[x]==INT_MAX){
        return -1;
    }
    return dp[x];

}
int minimumElements(vector<int> &num, int x)
{
    // Write your code here.
    //vector<int>dp(x+1,-1);
   // int ans=solve(dp,x,num);
    //if(ans==INT_MAX){
      //  return -1;
    //} else {
       // return ans;
    //}
    return solve1(x,num);
}
