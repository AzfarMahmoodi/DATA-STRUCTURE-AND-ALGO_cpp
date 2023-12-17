Runtime
213
ms
Beats
54.31%
of users with C++
Memory
75.61
MB
Beats
80.44%
of users with C++



class Solution {
public:
  /*  int sol(vector<int>& prices,int index,int buy,int limit){
        if(index==prices.size()){
            return 0;
        }
        if(limit==0){
            return 0;
        }
        int profit=0;
       
            if(buy==1){
                int buykro=-prices[index]+sol(prices,index+1,0,limit);
                int skipkro=0+sol(prices,index+1,1,limit);
                profit=max(buykro,skipkro);
            }
            else{
               int sellkro=+prices[index]+sol(prices,index+1,1,limit-1);
                int skipkro=0+sol(prices,index+1,0,limit);
                profit=max(sellkro,skipkro); 
            }
            return profit;
        
    }
*/
   /* int sol(vector<int>& prices,int index,int buy,int limit,vector<vector<vector<int>>>&dp){
        if(index==prices.size()){
            return 0;
        }
        if(limit==0){
            return 0;
        }
        if(dp[index][buy][limit]!=-1){
            return dp[index][buy][limit];
        }
        int profit=0;
       
            if(buy==1){
                int buykro=-prices[index]+sol(prices,index+1,0,limit,dp);
                int skipkro=0+sol(prices,index+1,1,limit,dp);
                profit=max(buykro,skipkro);
            }
            else{
               int sellkro=+prices[index]+sol(prices,index+1,1,limit-1,dp);
                int skipkro=0+sol(prices,index+1,0,limit,dp);
                profit=max(sellkro,skipkro); 
            }
            return dp[index][buy][limit]=profit;
        
    }*/

/*int sol(vector<int>& prices){
 int n=prices.size();
        vector<vector<vector<int>>>dp(n+1,vector<vector<int>>(2,vector<int>(3,0)));
        for(int index=n-1;index>=0;index--){
            for(int buy=0;buy<=1;buy++){
                
                for(int limit=1;limit<=2;limit++){
                    int profit=0;
                    if(buy==1){
                        int buykro=-prices[index]+dp[index+1][0][limit];
                        int skipkro=0+dp[index+1][1][limit];
                        profit=max(buykro,skipkro);
                    }
                    else{
                    int sellkro=+prices[index]+dp[index+1][1][limit-1];
                        int skipkro=0+dp[index+1][0][limit];
                        profit=max(sellkro,skipkro); 
                    }
                    dp[index][buy][limit]=profit;
                }
            }
        }
        return dp[0][1][2];
    }*/
int sol(vector<int>& prices){
 int n=prices.size();
        //vector<vector<vector<int>>>dp(n+1,vector<vector<int>>(2,vector<int>(3,0)));
        vector<vector<int>>cur(2,vector<int>(3,0));
        vector<vector<int>>next(2,vector<int>(3,0));
        for(int index=n-1;index>=0;index--){
            for(int buy=0;buy<=1;buy++){
                
                for(int limit=1;limit<=2;limit++){
                    int profit=0;
                    if(buy==1){
                        int buykro=-prices[index]+next[0][limit];
                        int skipkro=0+next[1][limit];
                        profit=max(buykro,skipkro);
                    }
                    else{
                    int sellkro=+prices[index]+next[1][limit-1];
                        int skipkro=0+next[0][limit];
                        profit=max(sellkro,skipkro); 
                    }
                    cur[buy][limit]=profit;
                }
                next=cur;
            }
        }
        return next[1][2];
    }
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        //vector<vector<vector<int>>>dp(n,vector<vector<int>>(2,vector<int>(3,-1)));
        return sol(prices);
    }
};
