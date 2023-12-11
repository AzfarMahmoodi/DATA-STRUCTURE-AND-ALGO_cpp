1120 /1120
Total Points Scored: 
4 /4
Your Total Score: 
74
Total Time Taken: 
0.09
Your Accuracy: 
20%
Attempts No.: 
5




//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution
{
    public:
    /*int sol(int n,int a[],int cur,int prev){
        if(cur==n){
            return 0;
        }
        int inc=0;
        if(a[prev]<a[cur]||prev==-1)
        inc=1+sol(n,a,cur+1,cur);
    
        int exc=0+sol(n,a,cur+1,prev);
        
        int ans=max(inc,exc);
        return ans;
    }
    */
    /*int sol(int n,int a[],int cur,int prev,vector<vector<int>>&dp){
        if(cur==n){
            return 0;
        }
        if(dp[cur][prev+1]!=-1){
            return dp[cur][prev+1];
        }
        int inc=0;
        if(a[prev]<a[cur]||prev==-1)
        inc=1+sol(n,a,cur+1,cur,dp);
    
        int exc=0+sol(n,a,cur+1,prev,dp);
        
        dp[cur][prev+1]=max(inc,exc);
        return dp[cur][prev+1];
    }*/
    
    /*int sol(int n,int a[]){
        vector<vector<int>>dp(n+1,vector<int>(n+1,0));
        for(int cur=n-1;cur>=0;cur--){
            for(int prev=cur-1;prev>=-1;prev--){
                int inc=0;
                if(a[prev]<a[cur]||prev==-1)
                inc=1+dp[cur+1][cur+1];
            
                int exc=0+dp[cur+1][prev+1];
                
                dp[cur][prev+1]=max(inc,exc);
                
            }
        }
        return dp[0][0];
        
    }*/
    
    /*int sol(int n,int a[]){
        vector<int>currow(n+1,0);
        vector<int>nextrow(n+1,0);
        
        for(int cur=n-1;cur>=0;cur--){
            for(int prev=cur-1;prev>=-1;prev--){
                int inc=0;
                if(a[prev]<a[cur]||prev==-1)
                inc=1+nextrow[cur+1];
            
                int exc=0+nextrow[prev+1];
                
                currow[prev+1]=max(inc,exc);
                
            }
            nextrow=currow;
        }
        return nextrow[0];
        
    }*/
    int sol(int n,int a[]){
        vector<int>ans;
        ans.push_back(a[0]);
        for(int i=1;i<n;i++){
            if(a[i]>ans.back()){
                ans.push_back(a[i]);
            }
            else{
                int index=lower_bound(ans.begin(),ans.end(),a[i])-ans.begin();
                ans[index]=a[i];
            }
        }
        return ans.size();
    }
    //Function to find length of longest increasing subsequence.
    int longestSubsequence(int n, int a[])
    {
       // your code here
       //vector<vector<int>>dp(n+1,vector<int>(n+1,-1));
       return sol(n,a);
    }
};

//{ Driver Code Starts.
int main()
{
    //taking total testcases
    int t,n;
    cin>>t;
    while(t--)
    {
        //taking size of array
        cin>>n;
        int a[n];
        
        //inserting elements to the array
        for(int i=0;i<n;i++)
            cin>>a[i];
        Solution ob;
        //calling method longestSubsequence()
        cout << ob.longestSubsequence(n, a) << endl;
    }
}

// } Driver Code Ends
