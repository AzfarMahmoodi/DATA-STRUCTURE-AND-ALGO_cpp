
Problem Solved Successfully
You get marks only for the first correct submission if you solve the problem without viewing the full solution.
Test Cases Passed: 
1120 /1120
Your Total Score: 
82
Total Time Taken: 
0.04
Correct Submission Count: 
4
Attempts No.: 
6



class Solution{
public:
    /*bool sol(int N, int arr[],int target,int index){
        if(target<0){
            return 0;
        }
        if(index>N){
            return 0;
        }
        if(target==0){
            return 1;
        }
        int inc=sol(N,arr,target-arr[index],index+1);
        int exc=sol(N,arr,target,index+1);
        
        return (exc or inc);
        
    }*/
    
    /*bool sol(int N, int arr[],int target,int index,vector<vector<int>>&dp){
        if(target<0){
            return 0;
        }
        if(index>N){
            return 0;
        }
        if(target==0){
            return 1;
        }
        if(dp[index][target]!=-1){
            return dp[index][target];
        }
        int inc=sol(N,arr,target-arr[index],index+1,dp);
        int exc=sol(N,arr,target-0,index+1,dp);
        dp[index][target]=(exc or inc);
        return dp[index][target];
        
    }  */
    
     /*bool sol(int total, int arr[], int N)
    {
        vector<vector<int>> dp(N+1, vector<int> (total+1, 0));
        
        for(int i=0; i<=N; i++){
            dp[i][0] = 1;
        }
        
        for(int index = N-1; index >= 0; index--){
            for(int target = 0; target <= (total/2); target++){
                
                bool include = 0;
                
                if(target - arr[index] >=0)
                    include = dp[index+1][target - arr[index]];
                    
                bool exclude = dp[index+1][target - 0];
                
                dp[index][target] = (include or exclude);
            }
        }
        
        return dp[0][total/2];
    }
    */
    
    bool sol(int total, int arr[], int N)
    {
        
        vector<int>cur(total/2+1);
        vector<int>next(total/2+1);
       next[0]=1;
            cur[0] = 1;
        
        
        for(int index = N-1; index >= 0; index--){
            for(int target = 0; target <= (total/2); target++){
                
                bool include = 0;
                
                if(target - arr[index] >=0)
                    include = next[target - arr[index]];
                    
                bool exclude =next[target - 0];
                
                cur[target] = (include or exclude);
            }
            next=cur;
        }
        
        return next[total/2];
    }
    
    int check(int N, int arr[]){
        int total=0;
       
        for(int i=0;i<N;i++){
            total+=arr[i];
        }
        if(total%2==1){
            return 0;
        }
        else{
            int target=total/2;
            //vector<vector<int>>dp(N+1,vector<int>(target+1,-1));
            return sol(total,arr,N);
        }
    }
    int equalPartition(int N, int arr[])
    {
        // code here
        
        return check(N,arr);
    }
};
