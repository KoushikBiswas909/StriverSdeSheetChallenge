/* Directed Unweighted Graph representation as Adjacency List */

int main(){
	// n = num of Nodes/Vertex ,  m = num of Edges
	int n,m;
	cin>>n>>m;

    //declare Adjancent List, a vector array of size n+1.
	vector<int> adj[n+1];


	// taking edges as input
	for(int i=0;i<m;i++){
		int u,v;
		cin>>u>>v;

		adj[u].push_back(v); //graph direction u to v.
	}
	return 0;
}

