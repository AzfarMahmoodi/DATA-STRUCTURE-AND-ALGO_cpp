You are better than
87.98%
Runtime
62 ms

#include <bits/stdc++.h> 
/*int sol(vector<int>&weight,vector<int>&value,int n,int maxWeight){
	if(n==0){
		if(weight[0]>maxWeight){
			return 0;
		}
		else{
			return value[0];
		}
	}
	int inc=0;
	if(weight[n]<=maxWeight){
		inc=sol(weight,value,n-1,maxWeight-weight[n])+value[n];
	}
	int exc=sol(weight,value,n-1,maxWeight)+0;
	int ans=max(inc,exc);
	return ans;
}*/
/*int sol(vector<int>&weight,vector<int>&value,int n,int maxWeight,vector<vector<int>>&dp){
	if(n==0){
		if(weight[0]>maxWeight){
			return 0;
		}
		else{
			return value[0];
		}
	}
	if(dp[n][maxWeight]!=-1){
		return dp[n][maxWeight];
	}
	int inc=0;
	if(weight[n]<=maxWeight){
		inc=sol(weight,value,n-1,maxWeight-weight[n],dp)+value[n];
	}
	int exc=sol(weight,value,n-1,maxWeight,dp)+0;
	dp[n][maxWeight]=max(inc,exc);
	return dp[n][maxWeight];
}*/

int sol(vector<int>& weight, vector<int>& value, int n, int capacity){

      vector<int>curr(capacity+1, 0);

 for(int w=weight[0]; w<=capacity; w++){

           if(weight[0]<=capacity)

               curr[w]= value[0];

            else

               curr[w]= 0;

       }

       for(int index=1; index<n; index++){

           for(int w=capacity; w>=0; w--){

 

       int include=0;

       if(weight[index]<=w)

           include=value[index]+curr[w-weight[index]];

 

        int exclude=curr[w];

 

        curr[w]= max(exclude, include);

           }

       }

 

        return curr[capacity];

}
int knapsack(vector<int> weight, vector<int> value, int n, int maxWeight) 
{
	// Write your code here
	
	return sol(weight,value,n,maxWeight);
}
