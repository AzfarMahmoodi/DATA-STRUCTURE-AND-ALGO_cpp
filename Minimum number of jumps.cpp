class Solution{
  public:
    int minJumps(int arr[], int n){
        // Your code here
       int des = 0;
        int pos = 0;
        int jump = 0;

        for(int i = 0; i<n-1; i++) {
            if( i == pos && arr[pos] == 0 && pos == des) return -1;
            
            des = max(arr[i] + i, des);
            
            if(pos == i) {
                pos = des;
                jump++;
            }
            
        }
        
        return jump;
        
    }
};
