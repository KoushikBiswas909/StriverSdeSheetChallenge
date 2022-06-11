// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
    private:
       bool checkforcycle(int s,int V, vector<int> &vis, vector<int> adj[]){
           queue<pair<int,int>> q;
           q.push({s,-1});
           vis[s]=1;
           
           while(!q.empty()){
               int node = q.front().first;
               int parent = q.front().second;
               q.pop();
               
               for(auto it: adj[node]){
                   if(!vis[it]){
                       q.push({it,node});
                       vis[it] = 1;
                   }
                   else if(parent!=it){
                       return true;
                   }
               }
           }
           return false;
       }
    
  public:
    // Function to detect cycle in an undirected graph using BFS.
    bool isCycle(int V, vector<int> adj[]) {
        // Code here
        vector<int> vis(V,0);
        
        // There can be multiple componant, among them someone is cyclic.
        for(int i=0;i<V;i++){
            if(!vis[i]){
                if(checkforcycle(i,V,vis,adj)){
                    return true;
                }
            }
        }
        return false;
    }
};

/*
Main trick: when we check BFS of a node, and a visited node is his adj node, but not his parent node,
            then it is a cyclic graph.
        
Code flow:
1. Create a queue with {node and his parent}
2. Check his adjecent nodes:
             if there are any adj node is previous visited and not it's parent node, Return True.
             Otherwise, return False.
             
Link: https://practice.geeksforgeeks.org/problems/detect-cycle-in-an-undirected-graph/1#
*/

// { Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int V, E;
        cin >> V >> E;
        vector<int> adj[V];
        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        Solution obj;
        bool ans = obj.isCycle(V, adj);
        if (ans)
            cout << "1\n";
        else
            cout << "0\n";
    }
    return 0;
}  // } Driver Code Ends
