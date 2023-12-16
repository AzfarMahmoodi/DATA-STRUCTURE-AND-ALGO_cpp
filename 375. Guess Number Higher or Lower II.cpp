Runtime
83
ms
Beats
71.43%
of users with C++
Memory
8.57
MB
Beats
58.40%
of users with C++

class Solution {
public:
/*int sol(int start,int end){
    if(start>=end){
        return 0;
    }
    int mani=INT_MAX;
    for(int i=start;i<=end;i++){
        mani=min(mani,i+max(sol(start,i-1),sol(i+1,end)));
    }
    return mani;
}*/

/*int sol(int start,int end,vector<vector<int>>&dp){
    if(start>=end){
        return 0;
    }
    if(dp[start][end]!=-1){
        return dp[start][end];
    }
    int mani=INT_MAX;
    for(int i=start;i<=end;i++){
        mani=min(mani,i+max(sol(start,i-1,dp),sol(i+1,end,dp)));
       
    }
    dp[start][end]=mani;
     return dp[start][end];
}*/
    int sol(int n){
        vector<vector<int>>dp(n+2,vector<int>(n+2,0));
            for(int start=n;start>=1;start--){
                for(int end=start;end<=n;end++){
                    if(start==end){
                            continue;
                        }
                    int mani=INT_MAX;
                    for(int i=start;i<=end;i++){
                        
                        mani=min(mani,i+max(dp[start][i-1],dp[i+1][end]));
                    }   
                    dp[start][end]=mani;
                }
            }
            return dp[1][n];
    }
    int getMoneyAmount(int n) {
        return sol(n);
    }
};
