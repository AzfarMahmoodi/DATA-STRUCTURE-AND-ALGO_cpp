class Solution {
public:
    void sortColors(vector<int>& arr) {
        int  zero=0;
   int one=0;
   int two=0;
   //   Write your code here
   for(int i=0;i<arr.size();i++){
      if(arr[i]==0){
         zero++;
      }
      else if(arr[i]==1){
         one++;
      }
      else{
         two++;
      }
   }
   for(int i=0;i<zero;i++){
      arr[i]=0;
   }
   for(int i=zero;i<zero+one;i++){
      arr[i]=1;
   }
   for(int i=zero+one;i<zero+one+two;i++){
      arr[i]=2;
   }
    }
};
