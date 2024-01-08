class Solution{
    public:
    vector<string> ans;
    
    void dfs(int i, int j , int n, vector<vector<int>> &arr , string op)
    {
        if(i==n-1 && j==n-1)
        {
            ans.push_back(op);
            return;
        }
        
        if(i<0 || i==n || j<0 || j==n || arr[i][j]==0 || arr[i][j]==-1)
        return ;
        
    
        arr[i][j]=-1;
        
        
        dfs(i-1 , j , n , arr , op+"U");
        dfs(i+1 , j , n , arr , op+"D");
        dfs(i , j-1 , n , arr , op+"L");
        dfs(i , j+1 , n , arr , op+"R");
        
        arr[i][j]=1;
    
        
    }
    vector<string> findPath(vector<vector<int>> &arr, int n) {
      
      if(arr[0][0]==0 || arr[n-1][n-1]==0)
      {
          ans.push_back("-1");
      
      return ans;
      }
      string op="";
      
      dfs(0 , 0 , n , arr ,op);
      
      return ans;
      
    }
};
