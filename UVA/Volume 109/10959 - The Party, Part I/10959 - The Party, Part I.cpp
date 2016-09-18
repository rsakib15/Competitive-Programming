#include <bits/stdc++.h>
#define WHITE 0
#define GRAY 1
#define BLACK 2
using namespace std;

vector<int>Graph[10110];
int visited[10110];
int dist[10110];

void bfs(int start){


    memset(visited,WHITE,sizeof(visited));
    memset(dist,0,sizeof(dist));

    queue<int>Q;
    int u,v;
    Q.push(start);
    visited[start]=GRAY;
    dist[start]=0;

    while(!Q.empty()){
        u=Q.front();
        Q.pop();
        for(int i=0;i<Graph[u].size();i++){
            v=Graph[u][i];
            if(visited[v]==WHITE){
                visited[v]=GRAY;
                dist[v]=dist[u]+1;
                Q.push(v);
            }

        }
        visited[u]=BLACK;
    }
}


int main(){
    //freopen("input.txt","r",stdin);
    int T,i,x,y,v,e;
    scanf("%d",&T);
    while(T--){
        cin>>v>>e;
        for(i=0;i<e;i++){
            cin>>x>>y;
            Graph[x].push_back(y);
            Graph[y].push_back(x);
        }

        bfs(0);
        for(int i=1;i<v;i++)
            cout<<dist[i]<<endl;
        if(T)
            cout<<endl;

        for(int i=0;i<v;i++)
            Graph[i].clear();
    }

}
