#include<bits/stdc++.h>
#define endl "\n"
#define endls "\n\n\n"
#define fi first
#define se second
#define all(x) x.begin(),x.end()
#define fast ios::sync_with_stdio(0); cin.tie(0);
#define pb push_back
using namespace std;
using ll = long long;

int main (){fast;
	int n_nodes, n_edges;
	cin >> n_nodes >> n_edges;
	vector < int > adj [ n_nodes + 1];

	for (int i = 0; i <  n_edges; i ++){
		int u,v; cin >> u >> v;
		adj [ u ].pb ( v );
		adj [ v ].pb ( u );
	}
	
	//colors will be 0 or 1 to identify
	vector < int > colors(n_nodes + 1,-1);//no node has color initially 
	
	//tomamos un nodo inicial
	int start = 1; //the problem will indicate what node to take as start
	
	queue< int > q;
	
	bool isBipartite = true;
	colors [ start ] = 0;

	q.push ( start );

	while (!q.empty() and isBipartite){
		int u = q.front();
		q.pop();

		for (int v : adj[ u ]){
			//if it has not been visited
			if ( colors[ v ] == -1){
				colors [ v ] = 1 - colors [ u ]; // to change between 1 and 0
				q.push ( v );
			}
			//if it has already visited
			else{
				if (colors [ u ] == colors [ v ]){
					isBipartite = false;
					break;
				}
			}
		
		}
	

	}
		
	cout << isBipartite<< endl;




	return 0;
}
