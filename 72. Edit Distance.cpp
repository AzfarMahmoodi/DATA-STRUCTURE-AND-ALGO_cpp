class Solution {
public:
    /*int sol(string a,string b,int i,int j,vector<vector<int>>&dp){
        if(i==a.length()){
            return b.length()-j;
        }
        if(j==b.length()){
            return a.length()-i;
        }
        if(dp[i][j]!=-1){
            return dp[i][j];
        }
        int ans=0;
        if(a[i]==b[j]){
            return sol(a,b,i+1,j+1,dp);
        }
        else
        {
            //replace
            int replace=1+sol(a,b,i+1,j,dp);
            int remove=1+sol(a,b,i,j+1,dp);
            int delet=1+sol(a,b,i+1,j+1,dp);
            ans=min(replace,min(remove,delet));
        }
    return dp[i][j]=ans;    
    }*/
    int sol(string a,string b){
       // vector<vector<int>>dp(a.length()+1,vector<int>(b.length()+1,0));
       vector<int>cur(b.length()+1,0);
         vector<int>next(a.length()+1,0);
        for(int i=a.length();i>=0;i--){
            for(int j=b.length();j>=0;j--){
                int ans=0;
                 if(i == a.length())
                    ans = b.length()-j;
                else if(j == b.length())
                    ans = a.length()-i;
                
                else if(a[i]==b[j]){
                    ans= next[j+1];
                }
                else
                {
                    //replace
                    int replace=1+next[j];
                    int remove=1+cur[j+1];
                    int delet=1+next[j+1];
                    ans=min(replace,min(remove,delet));
                }
                cur[j]=ans; 
          }
          next=cur;
        }
    return   next[0] ;
    }
    int minDistance(string word1, string word2) {
        //vector<vector<int>>dp(word1.length(),vector<int>(word2.length(),-1));
        return sol(word1,word2);
    }
};
