Runtime
0
ms
Beats
100.00%
of users with C++
Memory
8.98
MB
Beats
24.92%
of users with C++


class Solution {
    /*int solution(vector<int>& values,int i,int j,vector<vector<int>>&dp){
        if(i+1==j){
            return 0;
        }
        if(dp[i][j]!=-1){
            return dp[i][j];
        }
        int ans=INT_MAX;
        for(int k=i+1;k<j;k++){
            ans=min(ans,(values[i]*values[j]*values[k])+solution(values,i,k,dp)+solution(values,k,j,dp));
        }
        dp[i][j]=ans;
        return dp[i][j];
    }*/
    int solution(vector<int>& values){
        int n=values.size();
        vector<vector<int>>dp(n,vector<int>(n,0));
        
        
        for(int i=n-1;i>=0;i--){

        for(int j=i+2;j<n;j++){
            int ans=INT_MAX;
        for(int k=i+1;k<j;k++){
            ans=min(ans,(values[i]*values[j]*values[k])+dp[i][k]+dp[k][j]);
            
        }
        dp[i][j]=ans;
        }}

        return dp[0][n-1];
    }
public:
    int minScoreTriangulation(vector<int>& values) {
        
        
        
        return solution(values);
    }
};
