class Solution{
public:
    int minimumDays(int S, int N, int M){
        // code here
        int sunday=S/7;
        int tot=S*M;
        int ans=0;
        int remaingday=S-sunday;
        if(N<M){
            return -1;
        }
        if(tot%N==0){
            ans=tot/N;
        }
        if(tot%N>0){
            ans=(tot/N)+1;
        }
        if((N==M)&&(S>=8)){
            return -1;
        }
        
            return ans;
        }
    
};
