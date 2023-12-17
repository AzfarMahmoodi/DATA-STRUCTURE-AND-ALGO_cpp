Runtime
91
ms
Beats
76.37%
of users with C++
Memory
93.78
MB
Beats
29.08%
of users with C++

class Solution {
public:
int sol(vector<int>& prices){
    int profit=0;
    int mini=prices[0];
    for(int i=1;i<prices.size();i++){
        int diff=prices[i]-mini;
        profit=max(diff,profit);

        mini=min(mini,prices[i]);

    }
    return profit;
}
    int maxProfit(vector<int>& prices) {
        return sol(prices);
    }
};
