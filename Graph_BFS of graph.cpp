vector<int> bfsOfGraph(int V, vector<int> adj[]) {
        // Code here
        queue<int>q;
        vector<int>ans;
        vector<int>visited(V,0);
        q.push(0);
        visited[0]=1;
        while(!q.empty()){
            int front=q.front();
            q.pop();
            visited[front]=1;
            ans.push_back(front);
            for(auto i:adj[front]){
                if(!visited[i]){
                visited[i]=1;
                q.push(i);
                }
            }
        }
        return ans;
    }
