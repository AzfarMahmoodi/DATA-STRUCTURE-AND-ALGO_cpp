class Solution {
public:
void Reverse(vector<int>& arr, int start,int end){
      while (start <= end)
  {
    int temp = arr[start];
    arr[start] = arr[end];
    arr[end] = temp;
    start++;
    end--;
  }
    
}
    void rotate(vector<int>& arr, int k) {
        int n=arr.size();
     k %= n; 
        Reverse(arr, 0, n-k - 1);
  // Reverse last n-k elements
  Reverse(arr, n-k, n - 1);
  // Reverse whole array
  Reverse(arr, 0, n - 1);
  
    }
};
