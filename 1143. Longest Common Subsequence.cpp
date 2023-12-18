Runtime
29
ms
Beats
84.21%
of users with C++
Memory
6.76
MB
Beats
97.55%
of users with C++

class Solution {
public:
    /*int sol(string a, string b,int i,int j){
        if(i==a.length()){
            return 0;
        }
        if(j==b.length()){
            return 0;
        }
        if(a[i]==b[j]){
            return 1+sol(a,b,i+1,j+1);
        }
        else{
            return max(sol(a,b,i+1,j),sol(a,b,i,j+1));
        }
    }*/
   /* int sol(string a, string b,int i,int j,vector<vector<int>>&dp){
        if(i==a.length()){
            return 0;
        }
        if(j==b.length()){
            return 0;
        }
        if(dp[i][j]!=-1){
            return dp[i][j];
        }
        int ans=0;
        if(a[i]==b[j]){
            ans= 1+sol(a,b,i+1,j+1,dp);
        }
        else{
            ans=max(sol(a,b,i+1,j,dp),sol(a,b,i,j+1,dp));
        }
        return dp[i][j]=ans;
    }*/
    /*int sol(string a, string b){
       vector<vector<int>>dp(a.length()+1,vector<int>(b.length()+1,0));
        int ans=0;
        for(int i=a.length()-1;i>=0;i--){
            for(int j=b.length()-1;j>=0;j--){
        if(a[i]==b[j]){
            ans= 1+dp[i+1][j+1];
        }
        else{
            ans=max(dp[i+1][j],dp[i][j+1]);
        }
         dp[i][j]=ans;
         }
        }
        return dp[0][0];
    }
*/
    int sol(string a, string b){
       //vector<vector<int>>dp(a.length()+1,vector<int>(b.length()+1,0));
       vector<int>next(b.length()+1,0);
       vector<int>cur(b.length()+1,0);
        int ans=0;
        for(int i=a.length()-1;i>=0;i--){
            for(int j=b.length()-1;j>=0;j--){
        if(a[i]==b[j]){
            ans= 1+next[j+1];
        }
        else{
            ans=max(next[j],cur[j+1]);
        }
         cur[j]=ans;
         }
         next=cur;
        }
        return next[0];
    }
    int longestCommonSubsequence(string text1, string text2) {
        //vector<vector<int>>dp(text1.length(),vector<int>(text2.length(),-1));
        return sol(text1,text2);
    }
};
