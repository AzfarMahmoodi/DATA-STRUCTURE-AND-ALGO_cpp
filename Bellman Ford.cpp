You are better than
20.67%
Runtime
102 ms

#include<bits/stdc++.h>
vector<int> bellmonFord(int n, int m, int src, vector<vector<int>> &edges) {
    // Write your code here.
    vector<int>dist(n+1,(int)1e8);
    dist[src]=0;

    for(int j=1;j<n;j++){
      for (int i = 0; i < edges.size(); i++) {
        int u = edges[i][0];
        int v = edges[i][1];
        int wt = edges[i][2];
        if(dist[u]+wt<dist[v]){
            dist[v]=dist[u]+wt;
        }
      }
    }

    
    return dist;
}
