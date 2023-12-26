class Solution{
public:	
    int sol(string s){
        int maxi=INT_MIN;
        int sum=0;
      for(int i=0;i<s.length();i++){
          if(s[i]=='0'){
              sum+=1;
          }
          if(s[i]=='1'){
              sum-=1;
          }
              maxi=max(maxi,sum);
          if(sum<0){
              sum=0;
          }
      }
      
      return maxi;
    }
	int maxSubstring(string S)
	{
	   return sol(S);
	    // Your code goes here
	}
};
