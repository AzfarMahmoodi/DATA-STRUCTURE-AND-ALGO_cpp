Runtime
105
ms
Beats
55.93%
of users with C++
Memory
52.03
MB
Beats
37.26%
of users with C++

void dfs(vector<int>adj[],vector<bool> &visited,int node){
        visited[node]=true;
        // visited[src] = true;
        for(auto i : adj[node]){
            if(!visited[i]){
                dfs(adj, visited, i);
            }
        }
    }
    int makeConnected(int n, vector<vector<int>>& connections) {
        int len=connections.size();
        if(len<n-1){
            return -1;
        }

        vector<int>adj[n];
        for(int i=0;i<len;i++){
            int u=connections[i][0];
            int v=connections[i][1];

            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        vector<bool> visited(n, false);
        int ans = 0;
          for(int i=0; i<n; i++)
        if(!visited[i])
        {
            dfs(adj, visited, i);
            ans++;
        }
        return ans - 1;
    }
