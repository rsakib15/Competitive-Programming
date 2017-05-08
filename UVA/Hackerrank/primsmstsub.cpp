#include<bits/stdc++.h>
using namespace std;
const int SIZE = 1e6;
list<pair<int, int> > adj[SIZE];
bool inMst[SIZE];
int keys[SIZE],parent[SIZE];

int main(){
	int n,m,u,v,w;
	cin>>n>>m;
	for(int i=1; i<=m; i++){
		cin>>u>>v>>w;
		adj[u].push_back(make_pair(v,w));
		adj[v].push_back(make_pair(u,w));
	}

	int src;
	cin>>src;


	for(int i=0; i<=n; i++){
		inMst[i]=false;
		keys[i]=INT_MAX;
		parent[i]=-1;
	}

	priority_queue<pair<int, int> , vector<pair<int, int> >, greater<pair<int, int> > >pq;

	pq.push(make_pair(0,src));
	keys[src]=0;
	while(!pq.empty()){
		int U = pq.top().second;
		pq.pop();
		inMst[U]=true;


    for(auto it=adj[U].begin(); it!=adj[U].end(); it++){
			int V = it->first;
			int weight = it->second;
			if(inMst[V]==false && keys[V]>weight){
				keys[V]=weight;
				pq.push(make_pair(keys[V],V));
				parent[V]=U;
			}
		}
	}
	int total=0;
	for(int i=1; i<=n; i++){
        total+=keys[i];
        
	}
	cout<<total<<endl;
	return 0;
}
