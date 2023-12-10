Runtime
231
ms
Beats
78.95%
of users with C++
Memory
288.95
MB
Beats
29.45%
of users with C++


/*class Solution {
public:
     
      int solve(vector<int>& obstacles, int currlane, int currpos){

        int n = obstacles.size() - 1; // size of obstacles --> n+1

        // Base Case
        if(currpos == n)
            return 0;

        if(obstacles[currpos+1] != currlane){
            return solve(obstacles, currlane, currpos+1);
        }
        else{
            // sideways jump
            int ans = 1e9;
            for(int i=1; i<=3; i++){
                if(currlane != i && obstacles[currpos] != i)
                    ans = min(ans, 1 + solve(obstacles, i, currpos)); 
            }

            return ans;
        }
    }
    int minSideJumps(vector<int>& obstacles) {
        return solve(obstacles,0,2);
    }
};*/
class Solution {
public:
    int solve(int n,vector<int>&obstacles,int lane,int pos,vector<vector<int>>&dp)
    {
        if(pos == n-1)
        return 0;

        if(dp[lane][pos]!= -1)
            return dp[lane][pos];
int ans =1e9;
        if(obstacles[pos+1]!= lane)
            return solve(n,obstacles,lane,pos+1,dp);
        else{
            
            for(int k = 1;k<=3;k++)
            {
                if(lane != k && obstacles[pos]!=k)
                {
                    ans = min(ans,1+solve(n,obstacles,k,pos,dp));
                }   
            }
            dp[lane][pos] = ans;}
            return ans;
    }
    int minSideJumps(vector<int>& obstacles) {
        int n = obstacles.size();
    vector<vector<int>>dp(4,vector<int>(n,-1));
        return solve(n,obstacles,2,0,dp);
    }
};
