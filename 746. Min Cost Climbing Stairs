https://leetcode.com/problems/min-cost-climbing-stairs/submissions/1113191754

Runtime
6
ms
Beats
36.98%
of users with C++
Memory
13.85
MB
Beats
94.13%
of users with C++


#include<bits/stdc++.h>
class Solution {
    /*int solve1(vector<int>& cost,vector<int>&dp,int n){
        //base case 
        if(n==0){
            return cost[0];
        }
        if(n==1){
            return cost[1];

        }
        if(dp[n]!=-1){
            return dp[n];
        }
        dp[n]=min(solve1(cost,dp,n-1),solve1(cost,dp,n-2))+cost[n];


return dp[n];
    }*/
    
/*int solve1(vector<int>& cost,int n){
    vector<int>dp(n+1);
    dp[0]=cost[0];
    dp[1]=cost[1];
    for(int i=2;i<n;i++){
        dp[i]=cost[i]+min(dp[i-1],dp[i-2]);
    }
    return min(dp[n-1],dp[n-2]);
    
}*/
int solve1(vector<int>& cost,int n){
    int prev1=cost[0];
    int prev2=cost[1];
    
    
    for(int i=2;i<n;i++){
        int cur=min(prev1,prev2)+cost[i];
        prev1=prev2;
        prev2=cur;
    }
    return min(prev1,prev2);
}
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int n=cost.size();
       // vector<int>dp(n+1,-1);
        //int ans=min(solve1(cost,dp,n-1),solve1(cost,dp,n-2));
        return solve1(cost,n);
    }
};
