#include <bits/stdc++.h>
using namespace std;

const int SIZE=10000;
int visited[SIZE];
vector<int>G[SIZE];
vector<int>cost[SIZE];
int node,edge,w;

struct data{
    int v,w;
    bool operator<(data p)const{
        return w<p.w;
    }
};

int PRIMS(int src,int dest){
    priority_queue<data>PQ;
    int minimum=9999999;

    for(int i=0;i<node-1;i++){
        int u=src;
        visited[src]=1;

        for(int j=0;j<G[u].size();j++){
            int v=G[u][j];
            if(!visited[v]){
                data M;
                M.v=v;
                M.w=cost[u][j];
                PQ.push(M);
            }
        }

        while(visited[src]){
            data D=PQ.top();
            PQ.pop();
            src=D.v;
            int p=D.w;

            if(p<minimum)
                minimum=p;
            if(src==dest)
                return minimum;
        }
    }
}

int main(){
    //freopen("input.txt","r",stdin);
    int k=0,c=0;
    string s1,s2;
    while(cin>>node>>edge){

        memset(visited,0,sizeof(visited));
        if(node==0 && edge==0)
            break;

        map<string,int>MP;

        for(int i=0;i<edge;i++){
            cin>>s1>>s2>>w;

            if(MP.find(s1)==MP.end()){
                MP[s1]=k++;
            }
            if(MP.find(s2)==MP.end()){
                MP[s2]=k++;
            }
            int u=MP[s1];
            int v=MP[s2];

            G[u].push_back(v);
            G[v].push_back(u);
            cost[u].push_back(w);
            cost[v].push_back(w);
        }



        string src,dest;
        cin>>src>>dest;

        int res=PRIMS(MP[src],MP[dest]);
        printf("Scenario #%d\n",++c);
        printf("%d tons\n\n",res);

        for(int i=0;i<SIZE;i++){
            G[i].clear();
            cost[i].clear();
        }

    }
}
