
Problem Solved Successfully
Test Cases Passed: 
220 /220
Total Points Scored: 
4 /4
Your Total Score: 
86
Total Time Taken: 
0.16
Your Accuracy: 
100%
Attempts No.: 
1

class Solution{   
public:
    int lengthOfLongestAP(int A[], int n) {
        // code here   int lengthOfLongestAP(int A[], int n) 
    {
        if(n<=2) return n;
        int ans = 0;
        vector<vector<int>> dp(n+1, vector<int>(A[n-1] - A[0] +1, INT_MIN));
        
        for(int i=1 ; i<n ;i++)
        {
            for(int j=0; j<i;j++)
            {
                int diff =A[i]-A[j];
                int cnt=1;
                if(dp[j][diff]!=INT_MIN)
                    cnt=dp[j][diff];
                dp[i][diff]=cnt+1;
                ans=max(ans,dp[i][diff]);
            }
        }
        
        return ans;}
    }
};
