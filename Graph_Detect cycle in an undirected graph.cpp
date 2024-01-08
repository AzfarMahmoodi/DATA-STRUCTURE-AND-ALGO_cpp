    bool bfs(int node,int V, vector<int> adj[],vector<int>&visited,vector<int>&parent,queue<int>&q){
        q.push(node);
        visited[node]=1;
        parent[node]=-1;
        while(!q.empty()){
            int front=q.front();
            q.pop();
            for(auto i:adj[front]){
                if(visited[i]==true && i!=parent[front]){
                    return true;
                }
                else if(!visited[i]){
                q.push(i);
                visited[i]=1;
                parent[i]=front;
                }
            }
        }
        return false;
    }
    bool isCycle(int V, vector<int> adj[]) {
        // Code here
        vector<int>visited(V,0);
        vector<int>parent(V,-1);
        queue<int>q;
       for (int i = 0; i < V; i++) {
        if (!visited[i]) {
            bool ans = bfs(i,V, adj,visited,parent,q);
            if (ans) {
                return true;
            }
        }
    }

    return false;

    }
