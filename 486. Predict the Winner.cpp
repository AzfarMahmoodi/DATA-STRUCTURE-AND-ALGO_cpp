Runtime
4
ms
Beats
53.42%
of users with C++
Memory
8.03
MB
Beats
28.34%
of users with C++


class Solution {
public:
int sol(vector<int>& nums,int i,int j, vector<vector<int>>&dp){
       
        if(i>j){
            return 0;
        }
        if(i==j){
            return nums[i];
        }
         if(dp[i][j]!=-1){
            return dp[i][j];
        }
        int opt1=nums[i]+min(sol(nums,i+1,j-1,dp),sol(nums,i+2,j,dp));
        int opt2=nums[j]+min(sol(nums,i+1,j-1,dp),sol(nums,i,j-2,dp));
        return dp[i][j]=max(opt1,opt2);
    }
    bool predictTheWinner(vector<int>& nums) {
        int n=nums.size();
        int sum=0;
        vector<vector<int>>dp(nums.size()+1,vector<int>(nums.size()+1,-1));
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
        }
        
        int val=sol(nums,0,nums.size()-1,dp);
        int diff=sum-val;

        return val>=diff;
    }
};
