#include<bits/stdc++.h>
#define endl "\n"
#define endls "\n\n\n"
#define fi first
#define se second
#define sz(x) (int)x.size()
#define mk make_pair
#define all(x) x.begin(),x.end()
#define fast ios::sync_with_stdio(0); cin.tie(0);

using namespace std;
using ll  = long  long;
const int maxn  = 1e6;
const int mod = 1e9+7;

int visited [ maxn ]{};


void dfs(vector < int > *adj, int source){
	visited [ source ]  = 1;

	for (int v : adj [ source ])
		if ( visited [ v ] == 0)
			dfs(adj,v);
}

int main (){ fast;
	int n_nodes,n_edges;
	int connected_components = 0;
	cin >> n_nodes >> n_edges;

	vector < int > adj [ n_nodes + 1];

	for (int i = 0; i < n_edges; i ++){
		int u,v; cin >> u >> v;
		adj [ u ].push_back ( v );
		adj [ v ].push_back ( u );
	}

	for (int i = 1; i <= n_nodes; i ++){
		if (visited [ i ] == 0){
			connected_components ++;
			dfs(adj,i);
		}

	}
	cout << connected_components << endl;


	return 0;
}
