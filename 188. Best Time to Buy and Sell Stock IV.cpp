Runtime
14
ms
Beats
56.16%
of users with C++
Memory
11.49
MB
Beats
76.33%
of users with C++


class Solution {
public:
int sol(int k,vector<int>& prices){
 int n=prices.size();
        //vector<vector<vector<int>>>dp(n+1,vector<vector<int>>(2,vector<int>(3,0)));
        vector<vector<int>>cur(2,vector<int>(k+1,0));
        vector<vector<int>>next(2,vector<int>(k+1,0));
        for(int index=n-1;index>=0;index--){
            for(int buy=0;buy<=1;buy++){
                
                for(int limit=1;limit<=k;limit++){
                    int profit=0;
                    if(buy==1){
                        int buykro=-prices[index]+next[0][limit];
                        int skipkro=0+next[1][limit];
                        profit=max(buykro,skipkro);
                    }
                    else{
                    int sellkro=+prices[index]+next[1][limit-1];
                        int skipkro=0+next[0][limit];
                        profit=max(sellkro,skipkro); 
                    }
                    cur[buy][limit]=profit;
                }
                next=cur;
            }
        }
        return next[1][k];
    }
    int maxProfit(int k, vector<int>& prices) {
        return sol(k,prices);
    }
};
