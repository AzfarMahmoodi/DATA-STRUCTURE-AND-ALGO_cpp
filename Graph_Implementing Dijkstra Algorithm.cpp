    vector <int> dijkstra(int V, vector<vector<int>> adj[], int S)
    {
        // Code here
        vector<int>distance(V,INT_MAX);
        set<pair<int,int>>q;
        distance[S]=0;
        q.insert({0,S});
        while(!q.empty()){
            auto fro=*(q.begin());
            q.erase(q.begin());
            int topnode=fro.second;
            int topdistance=fro.first;
            for(auto i:adj[topnode]){
              
                if(topdistance+i[1]<distance[i[0]]){
                    distance[i[0]]=topdistance+i[1];
                    q.insert({distance[i[0]],i[0]});
                }
            }
        }
        return distance;
    }
