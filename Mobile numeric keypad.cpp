class Solution{


	public:
long long solve(int i,int j,vector<vector<int>>& keypad,int size,vector<vector<vector<long long>>>& dp){
	    if(size == 1){
	        return 1;
	    }
	    if(dp[i][j][size] != -1){
	        return dp[i][j][size];
	    }
	    
	    long long up=0,down=0,left=0,right=0,same=0;
	        same = solve(i,j,keypad,size-1,dp);
	    if(i+1 < 4 && keypad[i+1][j] != -1){
	        up = solve(i+1,j,keypad,size-1,dp);
	    }
	    if(i-1 >= 0 && keypad[i-1][j] != -1){
	        down = solve(i-1,j,keypad,size-1,dp);
	    }
	    if(j+1 < 3 && keypad[i][j+1] != -1){
	        left = solve(i,j+1,keypad,size-1,dp);
	    }
	    if(j-1 >= 0 && keypad[i][j-1] != -1){
	        right = solve(i,j-1,keypad,size-1,dp);
	    }
	    return dp[i][j][size] = up+down+right+left+same;
	}
	long long getCount(int N){
		long long ans = 0;
		
		vector<vector<int>> keypad = {{1,2,3},{4,5,6},{7,8,9},{-1,0,-1}};
		vector<vector<vector<long long>>> dp(5,vector<vector<long long>>(5,vector<long long>(N+1,-1)));
		
		for(int i=0;i<=3;i++){
		    for(int j=0;j<3;j++){
		        long long count = 0;
		        if(keypad[i][j] != -1){
		            count = solve(i,j,keypad,N,dp);
		        }
		        ans += count;
		    }
		}
		return ans;
	}

};
