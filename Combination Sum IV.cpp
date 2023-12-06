You are better than
100%
Runtime
19 ms

#include <bits/stdc++.h> 
/*int sol(vector<int>&num,int tar){
    if(tar==0){
        return 1;

    }
    if(tar<0){
        return 0;
    }
    int ans=0;
    for(int i=0;i<num.size();i++){
        
            ans+=sol(num,tar-num[i]);
        
    }
    return ans;
}*/
/*int sol(vector<int>&num,int tar,vector<int>&dp){
    if(tar==0){
        return 1;

    }
    if(tar<0){
        return 0;
    }
    if(dp[tar]!=-1){
        return dp[tar];
    }
    int ans=0;
    for(int i=0;i<num.size();i++){
        
            ans+=sol(num,tar-num[i],dp);
            
    }
    dp[tar]=ans;
    return dp[tar];
}*/
int sol(vector<int>&num,int tar){
    vector<int>dp(tar+1,0);
    dp[0]=1;
    
    for(int j=1;j<=tar;j++){
        for (int i = 0; i < num.size(); i++) {
            if(j-num[i]>=0)
          dp[j]+= dp[j - num[i]];
        }
    }
    return dp[tar];
}
int findWays(vector<int> &num, int tar)
{
    // Write your code here.
    
    return sol(num,tar);
}
