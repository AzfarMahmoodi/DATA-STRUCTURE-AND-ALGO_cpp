
Test Cases Passed: 
1120 /1120
Your Total Score: 
140
Total Time Taken: 
0.12
Correct Submission Count: 
2
Attempts No.: 
5

class Solution {
	public:
	int sol(string a){
	     vector<int>cur(a.length()+1,0);
        vector<int>next(a.length()+1,0);
        for(int i=a.length()-1;i>=0;i--){
            for(int j=a.length()-1;j>=1;j--){    
                if(a[i]==a[j]&&i!=j){
                    cur[j]=1+next[j+1];
                }
                else{
                    cur[j]= max(next[j],cur[j+1]);
                }
            }
            next=cur;
        }
        return next[1];
    }
		int LongestRepeatingSubsequence(string str){
		    // Code here
		    
		    return sol(str);
		}

};
