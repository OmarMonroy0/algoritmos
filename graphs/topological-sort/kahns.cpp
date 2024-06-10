#include<bits/stdc++.h>
#define endl "\n"
#define endls "\n\n\n"
#define fi first
#define se second
#define all(x) x.begin(),x.end()
#define sz(x) (int)x.size()
#define fast ios::sync_with_stdio(0); cin.tie(0);
#define mk make_pair
#define pb push_back
#define f0(n) for(int i = 0; i < n; i ++)
#define f1(n) for(int i = 1; i i<=n; i ++)

using namespace std;
using ll = long long;
const int maxn = 1e9;
const int maxa = 1e6 + 1;
const int mod = 1e9 + 7;

int visited[ maxa ]{};


int main (){ fast;
	int n_nodes,n_edges; 
	cin >> n_nodes >> n_edges;
	vector < int > adj[n_nodes + 1];
	int in_degree [ n_nodes + 1 ]{};
	vector < int > topo_sort;

	for (int i = 0; i < n_edges; i++){
		int u,v; cin >> u >> v;
		adj [ u ].pb ( v );

		in_degree [ v ] ++;
	}
	priority_queue <int,vector<int>,greater<int>> pq;

	for (int i = 1; i <= n_nodes; i++)
		if (in_degree [ i ] == 0)
			pq.push ( i );

	while (!pq.empty()){
		int u = pq.top();
		pq.pop();
		topo_sort.pb ( u );
		for (int v : adj [ u ]) {
			in_degree [ v ] --;
			if (in_degree [ v ] == 0)
				pq.push ( v );
		}
	}
	for (int i : topo_sort)
		cout << i << " ";
	
	
	return 0;
}
