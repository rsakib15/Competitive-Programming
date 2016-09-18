#include <bits/stdc++.h>
using namespace std;

#define FOR(i, L, U) for(int i=(int)L; i<=(int)U; i++)
#define FORD(i, U, L) for(int i=(int)U; i>=(int)L; i--)



#define SQR(x) ((x)*(x))
#define INF 99999999

typedef vector<int> vi;

#define WHITE 0
#define GRAY 1
#define BLACK 2
#define MAX_NODE 1009

int nodes,edges;
int dist[MAX_NODE];
vi g[MAX_NODE];

void bfs(int src){
    queue<int> q;
    int u,v;
    FOR(i,0,nodes-1)dist[i] = INF;
    q.push(src);
    dist[src]=0;
    while(!q.empty()){
        u = q.front();
        q.pop();
        FOR(i,0,g[u].size()-1){
            v = g[u][i];
            if(dist[v]==INF){
                dist[v] = dist[u] +1;
                q.push(v);
            }
        }
    }
}

int main(){
   int test,st,en;
   bool isBlank = false;
   scanf("%d", &test);
   while(test--){
       cin>> nodes >> edges;
       FOR(i,1,edges){
           scanf("%d %d", &st, &en);
           g[st].push_back(en);
           g[en].push_back(st);
       }

       bfs(0);
       if(isBlank)printf("\n");
       FOR(i,1,nodes-1)printf("%d\n",dist[i]);
       isBlank = true;
       FOR(i,0,nodes-1)g[i].clear();
   }
  return 0;
}
