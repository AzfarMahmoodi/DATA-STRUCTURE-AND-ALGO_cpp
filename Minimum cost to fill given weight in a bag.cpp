User
Vikash Kumar
3 months ago

Understandable soln

 

int solve(int cost[], int index, int capacity, vector<vector<int>>&dp){
        if(capacity == 0)
        return 0;
        
        if(index == 0 || capacity <0){
           return cost[0]!= -1 ? capacity*cost[0] : 1e8;  
        }
       
        if(dp[index][capacity]!= -1){
            return dp[index][capacity];
        }
        
        int ans = solve(cost, index-1, capacity, dp);
        if(capacity-(index+1)>=0 && cost[index]!= -1){
            ans = min(ans, cost[index] + solve(cost, index, capacity- (index+1), dp));
        }
       dp[index][capacity] = ans;
       
        return dp[index][capacity];
    }
    int minimumCost(int cost[], int N, int W) 
    { 
        // Your code goes here
        vector<vector<int>>dp(N+1, vector<int>(W+1, -1));
        
        int ans = solve(cost, N-1, W, dp);
        return ans == 1e8 ? -1: ans;
