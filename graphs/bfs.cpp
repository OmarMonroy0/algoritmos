#include<bits/stdc++.h>
#define endl "\n"
#define endls "\n\n\n"
#define fi first
#define se second
#define all(x) x.begin(),x.end()
#define sz(x) (int)x.size()
#define mk make_pair
#define fast ios::sync_with_stdio(0);
using namespace std;

const int maxn = 1e9;
const int modulo = 1e9 + 7;

int main (){ fast;
 	
	queue < int > vecinos;
	
	int source,des;
	cin >> source >> des;
	
	int n_nodes,n_edges;
	
	cin >> n_nodes >> n_edges;

	vector < int > adj [ n_nodes + 1 ];
	vector < int > dist (n_nodes,maxn); //this will tell us the distance from the source vertex to the other ones

	for (int i = 0; i < n_edges; i++){
		int u,v; cin >> u >> v;
		adj [ u ].push_back ( v );
		adj [ v ].push_back ( u );
	}
	//we insert source vertex in the queue 
	vecinos.push ( source );
	dist [ source ] = 0; //distance from source node to itself is 0
	

	while (!vecinos.empty()){
		int u = vecinos.front();
		vecinos.pop();

		for (int v : adj [ u ]){
			//if was already visited
			if ( dist [ v ] != maxn) continue;
			dist [ v ] = dist [ u ] + 1;
			vecinos.push ( v  );
		}
	}



	return 0;
}
