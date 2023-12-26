
class Solution{
public:
 static bool comp(struct val a, struct val b){
        return a.second<b.second;
    }
    int sol(struct val p[],int n,int index,int prev){
       // sort(p,p+n,comp);
        if(index>=n){
            return 0;
        }
        int inc=0;
        if((p[index].first>prev)){
       // return sol(p,n,index+1,prev);
       inc=sol(p,n,0,p[index].second)+1;
        }
        
             
             int exc=0+sol(p,n,index+1,prev);
             return max(inc,exc);
       
        
    }/*
    You are required to complete this method*/
    
    /*int sol(struct val p[],int n){
        sort(p,p+n,comp);
        int count=1;
       int prev=p[0].second;
        for(int index=1;index<n;index++){
            if((p[index].first>prev)){
                prev=p[index].second;
                count++;
            }
        }
        return count;
    }*/
    int maxChainLen(struct val p[],int n){
        //Your code here
        return sol(p,n,0,0);
    }
