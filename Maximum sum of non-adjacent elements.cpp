You are better than
87.14%
Runtime
86 ms
  
#include <bits/stdc++.h> 
/*int solve(vector<int>&nums,int n){
    if(n<0){
        return 0;
    }
    if(n==0){
        return nums[0];
    }
    int inc=solve(nums,n-2)+nums[n];
    int exc=solve(nums,n-1)+0;
    return max(inc,exc);

}*/

/*int solve1(vector<int>&nums,int n,vector<int>&dp){
    if(n<0){
        return 0;

    }
    if(n==0){
        return nums[0];
    }
    if(dp[n]!=INT_MIN){
        return dp[n];
    }
    int inc=solve1(nums,n-2,dp)+nums[n];
    int exc=solve1(nums,n-1,dp)+0;
    dp[n]=max(inc,exc);
    return dp[n];
}
*/
/*int solve1(vector<int> &nums, int n) {
  vector<int> dp(n + 1, INT_MIN);
  dp[0]=nums[0];
  for(int i=1;i<n;i++){
    int inc=dp[i-2]+nums[i];
    int exc=dp[i-1]+0;
    dp[i]=max(inc,exc);
    
  }return dp[n-1];
}
*/
int SO(vector<int> nums, int n) {

  int prev2 = 0;
  int prev1 = nums[0];

  for (int i = 1; i < n; i++) {
    int incl = prev2 + nums[i];
    int excl = prev1 + 0;
    int ans = max(incl, excl);
    prev2 = prev1;
    prev1 = ans;
  }

  return prev1;
}

int maximumNonAdjacentSum(vector<int> &nums){
    // Write your code here.
    int n=nums.size();
    //vector<int>dp(n+1,INT_MIN);
    
    return SO(nums,n);
}
