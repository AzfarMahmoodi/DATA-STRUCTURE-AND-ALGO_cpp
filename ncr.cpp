
Test Cases Passed: 
1120 /1120
Your Total Score: 
120
Total Time Taken: 
0.03
Correct Submission Count: 
5
class Solution{
public:
#define mod int(1e9+7)
   /* int sol(int n,int r, vector<vector<int>>&dp){
        if(r==0){
            return 1;
            
        }int ans=0;
        if(dp[n][r]!=-1){
            return dp[n][r];
        }
        if(n<r){
            return 0;
        }
        
        else
        {
            ans=((sol(n-1,r-1,dp)+sol(n-1,r,dp))%mod);
        }
        return dp[n][r]=ans;
    }*/
    
    int sol(int n,int r){
        vector<int>next(n+1);
         vector<int>cur(n+1);
        if(n<r){
            return 0;
            
        }
       next[0] = cur[0] = 1;
        if(r == n || r == 0){
            return 1;
        }
        for(int i=1;i<=n;i++){
            for(int j=1;j<=r;j++){
                next[j]=(cur[j-1]+cur[j])%mod;
            }
            cur=next;
        }
        return cur[r]%mod;
    }
    int nCr(int n, int r){
        // code here
        
        return sol(n,r);
    }
};
