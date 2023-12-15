Runtime
116
ms
Beats
37.64%
of users with C++
Memory
55.11
MB
Beats
89.81%
of users with C++

class Solution {
public:
    int longestSubsequence(vector<int>& arr, int difference) {
        unordered_map<int,int>dp;
        int ans=0;
        for(int i=0;i<arr.size();i++){
            int temp=arr[i]-difference;
            int tempAns=0;
            if(dp.count(temp)){
                tempAns=dp[temp];
            }
            dp[arr[i]]=tempAns+1;
            ans=max(ans,dp[arr[i]]);
        }
        return ans;
    }
};
