#include<bits/stdc++.h>
using namespace std;

// Depth First Search (DFS)

void dfs(int node,vector<int> &vis,vector<int> adj[], vector<int> &storedfs){
	storedfs.push_back(node);
	vis[node]=1;
	for(auto it: adj[node]){
		if(!vis[it])
			dfs(it,vis,adj,storedfs);
	}
}

void dfsOfGraph(int V,vector<int> adj[]){
	vector<int> storedfs;
	vector<int> vis(V,0);
	for(int i=0;i<V;i++){
		if(!vis[i]){
			dfs(i,vis,adj,storedfs);
		}
	}
	for(auto it: storedfs)
		cout<<it<<" ";
	return;
}

int main(){

	// Taking inputs in a adj
	int n,m;
	cin>>n>>m;

	vector<int> adj[n];
	for(int i=0;i<m;i++){
		int u,v;
		cin>>u>>v;

		adj[u].push_back(v);
		adj[v].push_back(u);
	}

	dfsOfGraph(n,adj);
}

/*
Input:
5 4
0 1
0 2
0 4
4 3

Output:
0 1 2 3 4

Time Complexity: O(V + E)
Auxiliary Space: O(V)
*/
