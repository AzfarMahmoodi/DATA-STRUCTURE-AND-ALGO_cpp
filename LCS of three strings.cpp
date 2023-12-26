Problem Solved Successfully
You get marks only for the first correct submission if you solve the problem without viewing the full solution.
Test Cases Passed: 
1050 /1050
Your Total Score: 
144
Total Time Taken: 
0.35
Correct Submission Count: 
2

int sol( string a, string b,string c,int n, int m,int o,int i,int j,int k,vector<vector<vector<int>>>&dp){
        if(a.length()==i  || b.length()==j || c.length()==k){
            return 0;
        } 
        
        if(dp[i][j][k]!=-1){
            return dp[i][j][k];
        }
        //int ans=0;
        if((a[i]==b[j])&&(b[j]==c[k])){
           dp[i][j][k] =1+sol(a,b,c,n,m,o,i+1,j+1,k+1,dp);
        }
       
        else{
            dp[i][j][k]=max(sol(a,b,c,n,m,o,i+1,j,k,dp),max(sol(a,b,c,n,m,o,i,j+1,k,dp),sol(a,b,c,n,m,o,i,j,k+1,dp)));
            //dp[i][j][k]= max(sol(a,b,c,n,m,o,i+1,j,k,dp),max(sol(a,b,c,n,m,o,i,j+1,k,dp),max(sol(a,b,c,n,m,o,i,j,k+1,dp),max(sol(a,b,c,n,m,o,i,j,k+1,dp),max(sol(a,b,c,n,m,o,i+1,j,k,dp),sol(a,b,c,n,m,o,i,j+1,k,dp))))));
        }
        return dp[i][j][k];
    }

int LCSof3 (string A, string B, string C, int n1, int n2, int n3)
{   vector<vector<vector<int>>>dp(n1+1,vector<vector<int>>(n2+1,vector<int>(n3+1,-1)));
    return sol(A,B,C,n1,n2,n3,0,0,0,dp);}
