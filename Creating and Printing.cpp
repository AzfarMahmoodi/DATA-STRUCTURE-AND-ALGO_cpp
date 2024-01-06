vector < vector < int >> printAdjacency(int n, int m, vector < vector < int >> & edges) {
    // Write your code here.
    vector<vector<int>>vec(n);
     vector<int>adj[n];
    for(int i=0;i<m;i++){
        int u=edges[i][0];
        int v=edges[i][1];
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

   for(int i=0;i<n;i++){
        vec[i].push_back(i);
        for(int j=0;j<adj[i].size();j++){
            vec[i].push_back(adj[i][j]);
        }
    }
    return adj;
}
