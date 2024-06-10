#include<bits/stdc++.h>
#define endl "\n"
#define endls "\n\n\n"
#define fi first
#define se second
#define all(x) x.begin(),x.end()
#define mk make_pair
#define fast ios::sync_with_stdio(0) cin.tie(0);
using namespace std;
using ll = long long;

const int maxn = 1e6 + 1;
enum { unvisited_node = 0, visited_node = 1};


void dfs(vector<int> * adjs, bool * visitado,int start){
	
	visitado [ start ] = visited_node;
	for (int &v : adjs [ start ]) 
		if ( visitado [ v ]  == unvisited_node)
			dfs( adjs, visitado, v);
		
}

int main (){
	int nodes, edges;
	int u,v;
	cin >> nodes >> edges;
	vector < int > adj [ nodes + 1 ];
	bool visited_nodes [ nodes + 1 ]{};
	
	for (int i = 0; i < edges; i ++){
		cin >> u >> v;
		adj [ u ].push_back ( v );
		adj [ v ].push_back ( u );
	
	}
	dfs(adj,visited_nodes, 1);

	for (int u = 1; u <= nodes; u++){
		if (visited_nodes [ u ] == unvisited_node)
			dfs(adj,visited_nodes,u);
		cout << endl;
	}
	
	return 0;
}
