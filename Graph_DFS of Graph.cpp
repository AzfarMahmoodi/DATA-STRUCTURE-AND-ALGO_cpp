Test Cases Passed: 
1120 /1120
Total Points Scored: 
2 /2
Your Total Score: 
242
Total Time Taken: 
0.05
Your Accuracy: 
100%
Attempts No.: 
1

void dfs(int node,int vis[],vector<int>&ans,vector<int>adj[]){
        vis[node]=1;
        ans.push_back(node);
        for(int neighbours:adj[node]){
            if(!vis[neighbours]) dfs(neighbours,vis,ans,adj);
        }
    }

    // Function to return a list containing the DFS traversal of the graph.
    vector<int> dfsOfGraph(int n, vector<int> adj[]) {
        // Code here
        int vis[n]={0};
        vector<int>ans;
        int start=0;
        dfs(start,vis,ans,adj);
        return ans;
    }
