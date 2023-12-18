Runtime
93
ms
Beats
56.97%
of users with C++
Memory
55.21
MB
Beats
89.14%
of users with C++

class Solution {

public:
int sol(vector<int>& prices,int fee){
 int n=prices.size();
        //vector<vector<vector<int>>>dp(n+1,vector<vector<int>>(2,vector<int>(3,0)));
        vector<int>cur(2,0);
        vector<int>next(2,0);
        for(int index=n-1;index>=0;index--){
            for(int buy=0;buy<=1;buy++){
                
               
                    int profit=0;
                    if(buy==1){
                        int buykro=-prices[index]+next[0];
                        int skipkro=0+next[1];
                        profit=max(buykro,skipkro);
                    }
                    else{
                    int sellkro=+prices[index]-fee+next[1];
                        int skipkro=0+next[0];
                        profit=max(sellkro,skipkro); 
                    }
                    cur[buy]=profit;
                }
                next=cur;
            
        }
        return next[1];
}
    int maxProfit(vector<int>& prices, int fee) {
        return sol(prices,fee);
    }
};
