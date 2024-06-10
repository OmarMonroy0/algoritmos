#include<bits/stdc++.h>
#define endl "\n"
#define endls "\n\n\n"
#define fi first
#define se second
#define all(x) x.begin(),x.end()
#define fast ios::sync_with_stdio(0); cin.tie(0); 
#define sz(x) (int)x.size()
#define mk make_pair
#define pb push_back
#define f0(n) for (int i = 0; i < n ; i ++)
#define f1(n) for (int i = 1; i <= n; i ++)

using namespace std;
using ll = long long;
const int maxa = 1e6 + 1;


vector < int > topo_sort;
int visitado [ maxa ]{};

/*
 	Basically for this algorithm we use dfs, and then
	insert each node visited in an array
	As you can see for this topological sort we only insert( in reverse order )
	the nodes in a vector as soon as the are visited.
	That is in simple words topological sort
*/
void TopologicalSort(vector < int > *adj,int start){
	visitado[ start ] = 1;
	for (int v : adj [ start ])
		if (visitado [ v ] == 0)
			TopologicalSort(adj,v);
	topo_sort.pb( start );
}

int main(){ fast;
	int n_nodes, n_edges;
	cin >> n_nodes >> n_edges;
	vector < int > adj [ n_nodes + 1];

	for (int i = 1; i <= n_edges; i ++){
		int u,v; cin >> u >> v;
		adj [ u ].pb ( v ); //it is a directec graph
	}
	for (int u = 1; u <= n_nodes; u ++)
		if (visitado [ u ] == 0)
			TopologicalSort(adj,u);
	reverse(all(topo_sort));

	for (int u : topo_sort)
		cout << u << " ";
	return 0;
}
