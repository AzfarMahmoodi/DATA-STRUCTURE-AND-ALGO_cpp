Runtime
103
ms
Beats
54.24%
of users with C++
Memory
6.92
MB
Beats
95.89%
of users with C++


class Solution {
public:
    int sol(string a, string b){
       //vector<vector<int>>dp(a.length()+1,vector<int>(b.length()+1,0));
       vector<int>next(b.length()+1,0);
       vector<int>cur(b.length()+1,0);
        int ans=0;
        for(int i=a.length()-1;i>=0;i--){
            for(int j=b.length()-1;j>=0;j--){
        if(a[i]==b[j]){
            ans= 1+next[j+1];
        }
        else{
            ans=max(next[j],cur[j+1]);
        }
         cur[j]=ans;
         }
         next=cur;
        }
        return next[0];
    }
    int longestPalindromeSubseq(string s) {
        
        string text2=s;
        reverse(text2.begin(), text2.end());
        return sol(s,text2);
    }
};
