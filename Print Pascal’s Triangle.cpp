int ncr(int n,int r){
long long res = 1;

    // calculating nCr:
    for (int i = 0; i < r; i++) {
        res = res * (n - i);
        res = res / (i + 1);
    }
    return (int)(res);
}
vector<vector<int>> pascalTriangle(int N) {
    // Write your code here.
    vector<vector<int>>ans;
    for(int i=1;i<=N;i++){
        vector<int>temp;
        for(int j=1;j<=i;j++){
            int ans=ncr(i-1,j-1);
            temp.push_back(ans);
        }
        ans.push_back(temp);
    }
    return ans;
}
