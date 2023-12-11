
Runtime
8
ms
Beats
96.65%
of users with C++
Memory
8.84
MB
Beats
87.35%
of users with C++


class Solution {
public:
    /*int sol(vector<int>& slices,int index,int end,int n){
        if(n==0||index>end){
            return 0;
        }
        int inc=slices[index]+sol(slices,index+2,end,n-1);
        int exc=0+sol(slices,index+1,end,n);
        return max(inc,exc);
        
    }*/
    /*int sol(vector<int>& slices,int index,int end,int n,vector<vector<int>>&dp){
        if(n==0||index>end){
            return 0;
        }
        if(dp[index][n]!=-1){
            return dp[index][n];
        }
        int inc=slices[index]+sol(slices,index+2,end,n-1,dp);
        int exc=0+sol(slices,index+1,end,n,dp);
        dp[index][n]= max(inc,exc);
        return dp[index][n];
    }*/
    /*int sol(vector<int>& slices){
         int k=slices.size();
        vector<vector<int>>dp(k+2,vector<int>(k+2,0));
        vector<vector<int>>dp1(k+2,vector<int>(k+2,0));
        for(int index=k-2;index>=0;index--){
            for(int n=1;n<=k/3;n++){
                int inc=slices[index]+dp[index+2][n-1];
                int exc=0+dp[index+1][n];
                dp[index][n]= max(inc,exc);
            }
        }
        
        for(int index=k-1;index>=1;index--){
                    for(int n=1;n<=k/3;n++){
                        int inc=slices[index]+dp1[index+2][n-1];
                        int exc=0+dp1[index+1][n];
                        dp1[index][n]= max(inc,exc);
            }
        }
        int case1=dp[0][k/3];
        int case2=dp1[1][k/3];
        return max(case1,case2);
    }*/

    int sol(vector<int>& slices){
         int k=slices.size();
        vector<int> prev1(k+2,0);
        vector<int> cur1(k+2,0);
        vector<int> next1(k+2,0);
        
        vector<int> prev2(k+2,0);
        vector<int> cur2(k+2,0);
        vector<int> next2(k+2,0);

        for(int index=k-2;index>=0;index--){
            for(int n=1;n<=k/3;n++){
                int inc=slices[index]+next1[n-1];
                int exc=0+cur1[n];
                prev1[n]= max(inc,exc);
            }
            next1=cur1;
            cur1=prev1;
        }
    
        for(int index=k-1;index>=1;index--){
                    for(int n=1;n<=k/3;n++){
                        int inc=slices[index]+next2[n-1];
                        int exc=0+cur2[n];
                        prev2[n]= max(inc,exc);
            }
            next2=cur2;
            cur2=prev2;
        }
        int case1 = cur1[k/3];
        int case2 = cur2[k/3];
        return max(case1,case2);
    }
    int maxSizeSlices(vector<int>& slices) {
         int n=slices.size();
        //vector<vector<int>>dp(n,vector<int>(n,-1));
       //vector<vector<int>>dp1(n,vector<int>(n,-1));
        //int case1=sol(slices,0,n-2,n/3,dp);
        //int case2=sol(slices,1,n-1,n/3,dp1);
        //return max(case1,case2);
        return sol(slices);
    }
};
