/* Undirected Weighted Graph representation as Adjacency List */

int main(){
	// n = num of Nodes/Vertex ,  m = num of Edges
	int n,m;
	cin>>n>>m;

    //declare Adjancent List, a vector array of size n+1.
	vector<pair<int,int>> adj[n+1];


	// taking edges as input, wt is weight
	for(int i=0;i<m;i++){
		int u,v,wt;
		cin>>u>>v>>wt;
		

		adj[u].push_back({v,wt});
		adj[v].push_back({u,wt});
	}
	return 0;
}
