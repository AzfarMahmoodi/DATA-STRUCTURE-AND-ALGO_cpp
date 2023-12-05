You are better than
100%
Runtime
9 ms

#include<bits/stdc++.h>
using namespace std;
/*  dp top down approch     recursion +memorization     tc=o(n)  sc=o(n)+o(n)

int fibo(int n,vector<int>&dp){
        if(n==0 || n==1){
                return n;
        }
        if(dp[n]!=-1){
                return dp[n];
        }
        dp[n]=fibo(n-1,dp)+fibo(n-2,dp);
        return dp[n];
}*/

/*dp bottom up approch        tabular                         tc=o(n)    sc=o(n)

int fibo(int n,vector<int>&dp){
       dp[0]=0;
       dp[1]=1;
       for(int i=2;i<=n;i++){
           dp[i] =dp[i-1]+dp[i-2];
       }
       return dp[n];
}*/

//optimal solution    tc=o(n)  sc=o(1);
int fibo(int n){
        int prev2=0;
        int prev1=1;
        for(int i=2;i<=n;i++){
                int cur=prev1+prev2;
                prev2=prev1;
                prev1=cur;

        }
        return prev1;
}
int main()
{ 
        int n;
        cin>>n;
        //vector<int>dp(n+1);
        cout<<fibo(n);

}
