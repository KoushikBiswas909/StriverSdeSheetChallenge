/* Undirected Unweighted Graph representation as Adjacency Matrix */


int main(){
	// n = num of Nodes/Vertex ,  m = num of Edges
	int n,m;
	cin>>n>>m;

	// declare adjancent matrix of size N+1, if graph is 1 based indexing
	// otherwise take N size
	int adj[n+1][n+1];

	// taking edges as input
	for(int i=0;i<m;i++){
		int u,v;
		cin>>u>>v;
		adj[u][v]=1;
		adj[v][u]=1;
	}
}

// Space complexity: O(n*n)
