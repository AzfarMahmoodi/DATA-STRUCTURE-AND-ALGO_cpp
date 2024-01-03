int sol(int N, int X, int Y,vector<int>&dp){
	    if(N==1 || N==X  || N==Y){
	        return 1;
	    }
	    if(dp[N]!=-1) return dp[N];
	    int p,q,r;
	    if(N>=X){
	        p= sol(N-X,X,Y,dp);
	    }
	    else{
	        p=1;
	    }
	     if(N>=Y){
	        q= sol(N-Y,X,Y,dp);
	    }
	    else{
	        q=1;
	    }
	     if(N>=1){
	        r=sol(N-1,X,Y,dp);
	    }
	    else{
	        r=1;
	    }
	    return dp[N]=(!p ||!q || !r);
	}
	int findWinner(int N, int X, int Y)
	{
		// Your code goes here
		vector<int>dp(N+1,-1);
		return sol(N,X,Y,dp);
	}
