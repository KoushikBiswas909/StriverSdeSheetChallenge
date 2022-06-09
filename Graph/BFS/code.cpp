#include<bits/stdc++.h>
using namespace std;

// Breadth First Search (BFS)

void bfsOfGraph(int V, vector<int> adj[]){
	vector<int> bfs;
	vector<int> vis(V,0);
	for(int i=0;i<V;i++){
		if(!vis[i]){
			queue<int> q;
			q.push(i);
			vis[i]=1;
			while(!q.empty()){
				int node = q.front();
				q.pop();
				bfs.push_back(node);

				for(auto it: adj[node]){
					if(!vis[it]){
						q.push(it);
						vis[it]=1;
					}
				}

			}
		}
	}
	for(auto j: bfs)
		cout<<j<<" ";
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

	bfsOfGraph(n,adj);
}

/*
Input:
5 4
0 1
0 2
0 4
4 3

Output:
0 1 2 4 3

Time Complexity: O(V + E)
Auxiliary Space: O(V)
*/
