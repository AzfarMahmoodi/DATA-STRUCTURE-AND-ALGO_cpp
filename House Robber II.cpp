You are better than
91.13%
Runtime
31 ms

#include <bits/stdc++.h> 
long long int SO(vector<int> nums,int start,int end) {

  long long int prev2 = 0;
  long long int prev1 = nums[start];

  for (int i =start+1; i <=end; i++) {
    long long int incl = prev2 + nums[i];
    long long int excl = prev1 + 0;
    long long int ans = max(incl, excl);
    prev2 = prev1;
    prev1 = ans;
  }

  return prev1;
}
long long int houseRobber(vector<int>& valueInHouse)
{
    // Write your code here.
    int n = valueInHouse.size();
    if( n==1)
        return valueInHouse[0];

    return max(SO(valueInHouse,1,n-1),SO(valueInHouse,0,n-2));
}
