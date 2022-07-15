#include<bits/stdc++.h>
using namespace std;

// check graph bipartite or not using BFS

bool bipartiteDfs(int node, vector<int> adj[], int colour[]){
  for(auto it: adj[node]){
    if(colour[it] == -1){
      colour[it] = 1- colour[node];
      if(!bipartiteDfs(it,adj,colour))
        return false;
    }
    else if(colour[it] == colour[node])
      return false;
  }

  return true;
}

bool checkBipartite(vector<int> adj[], int n){
  int colour[n];
  memset(colour, -1, sizeof colour);

  for(int i=0;i<n;i++){
    if(colour[i] == -1){
      colour[i] = 1;
      if(!bipartiteDfs(i,adj,colour))
        return false;
    }
  }

  return true;
}

int main(){
  int n,m;
  cin>>n>>m;

  vector<int> adj[n];

  for(int i=0;i<m;i++){
    int u,v;
    cin>>u>>v;

    adj[u].push_back(v);
    adj[v].push_back(u);
  }

  if(checkBipartite(adj,n)){
    cout<<"Yeah! Bipartite";
  }
  else
    cout<<"No!";
}

/*
Input:
6 7
0 1
1 2
1 4
1 5
2 3
3 4
3 5

output:

Yeah! Bipartite
*/
