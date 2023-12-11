Time complexity:
O(n2)

 

Space complexity:
O(1)




class Solution {
public:
  /*  int solve(vector<int>& satisfaction,int time,int index,vector<vector<int>>&dp){
        int n=satisfaction.size();
        if(n==index){
            return 0;
        }
        if(dp[time][index]!=-1){
            return dp[time][index];
        }
        int inc=satisfaction[index]*(time+1)+solve(satisfaction,time+1,index+1,dp);
        int exc=0+solve(satisfaction,time,index+1,dp);
        dp[time][index]=max(inc,exc);
        return dp[time][index];
    }*/

   /* int solveTab(vector<int>& satisfaction){
        int n=satisfaction.size();
        vector<vector<int>>dp(n+1,vector<int>(n+1,0));
        for(int index=n-1;index>=0;index--){
            for(int time=index;time>=0;time--){
                int inc=satisfaction[index]*(time+1)+dp[time+1][index+1];
                int exc=0+dp[time][index+1];
                dp[time][index]=max(inc,exc);
                
            }
        }
        return dp[0][0];
    }*/
   /* int solveTab(vector<int>& satisfaction){
        int n=satisfaction.size();
        vector<int>cur(n+1,0);
        vector<int>next(n+1,0);
        for(int index=n-1;index>=0;index--){
            for(int time=index;time>=0;time--){
                int inc=satisfaction[index]*(time+1)+next[time+1];
                int exc=0+next[time];
                cur[time]=max(inc,exc);
                
            }
            next=cur;
        }
        return next[0];
    }*/
    int maxSatisfaction(vector<int>& satisfaction) {
        //int n=satisfaction.size();
        //vector<vector<int>>dp(n+1,vector<int>(n+1,-1));
        sort(satisfaction.begin(),satisfaction.end());
        return solveTab(satisfaction);
    }
};

 int maxSatisfaction(vector<int>& arr) {
        int n=arr.size(),sum=0,maxv=INT_MIN,level;
        sort(arr.begin(),arr.end());

        if(arr[n-1]<=0){
            return sum;
        }

        for(int i=0;i<n;i++){
            sum=0;
            level=1;
            for(int j=i;j<n;j++){
                sum+=(arr[j]*level);
                level++;
            }
            maxv=max(sum,maxv);
        }

        return maxv;
  
    }
};
