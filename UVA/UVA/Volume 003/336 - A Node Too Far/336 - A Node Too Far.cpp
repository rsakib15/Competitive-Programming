#include <bits/stdc++.h>
using namespace std;

///*************************************************************///
#define NL              printf("\n")
#define nl              '\n'
#define XX              first
#define YY              second
#define SF              scanf
#define PF              printf
#define MOD             1000000007
#define EPS             1e-9
#define MP              make_pair
#define PB              push_back
#define PPB             pop_back
#define PI              acos(-1.0)
#define INF             1<<30
///*************************************************************///
#define READ()          freopen("input.txt", "r", stdin)
#define WRITE()         freopen("output.txt", "w", stdout)
#define BOOST           std::ios_base::sync_with_stdio(0);
#define MEM(n, val)     memset((n), val, sizeof(n))
#define DEBUGI(x)       printf("Debug  %d !!\n",x)
#define DEBUGD(x)       printf("Debug  %llf !!\n",x)
#define DEBUGL(x)       printf("Debug  %lld !!\n",x)
#define PC()            printf("Case %d: ", test++)
///*************************************************************///
#define ABS(x)          ((x)<0?-(x):(x))
#define FABS(x)         ((x)+eps<0?-(x):(x))
#define MAX(a,b)        ((a)>(b)?(a):(b))
#define MIN(a,b)        ((a)<(b)?(a):(b))
#define FOR(I,J,K)      for(I = J; I < K; I++)
#define REV(I,J,K)      for(I = J; I > K; I--)
#define ssz(a)          strlen(a)
#define gcd(a,b)        ll _gcd(int a,int b){if(b%a == 0) return a; _gcd(b%a,a);}
#define lcm(a,b)        ((a*b)/gcd(a,b))
#define VSORT(v)        sort(v.begin(),v.end())
#define UNIQUE(V)       (V).erase(unique((V).begin(),(V).end()),(V).end())
#define DIGIT(x,y)      (((int)(log10((x))/log10((y))))+1)
#define cmpr            bool compare(const pair<int,int>&i,const pair<int,int>&j){return i.first < j.first;}
///************************************************************///
typedef long long LL;
typedef unsigned long long ULL;
typedef pair<int, int> pii;
typedef pair<long long, long long> pll;
typedef pair<int, string> pis;
typedef priority_queue<int> pq;


vector < int > Graph[1010];
int visited[1010];
int level[1010];

int node, edge;
int dis = 0;

int BFS(int source){
    int i,j;

    for(i=1; i<=node; i++){
        visited[i] = 0;
        level[i] = 10000000;
    }

    queue < int > Q;
    Q.push(source);
    visited[source] = 1;
    level[source] = 0;

    while(!Q.empty()){
        int u = Q.front();
        Q.pop();
        for(j = 0; j < Graph[u].size(); j++){
            int v = Graph[u][j];
            if(!visited[v]){
                visited[v] = 1;
                level[v] = level[u]+1;
                Q.push(v);
            }
        }
    }
}


int main(){
    //READ();
    //WRITE();
    int i,j,k;
    int s = 1;

    while(scanf("%d",&edge)==1) {

        map <int , int> m;

        MEM(Graph,NULL);

        if(edge == 0)
            break;

        int index = 1;

        for(i=0; i< edge; i++){
            int x, y;
            scanf("%d %d",&x,&y);

            if(!m[x])
                m[x] = index++;

            if(!m[y])
                m[y] = index++;

            Graph[m[x]].push_back(m[y]);
            Graph[m[y]].push_back(m[x]);

        }

        node = index -1 ;

        int from , to ;
        while(scanf("%d %d",&from,&to)==2){
            int count = 0;
            if(from == 0 && to ==0)
            break ;
            BFS(m[from]);
            for(j=1;j<index;j++){
                if(level[j]> to)
                    count++;
            }

            printf("Case %d: %d nodes not reachable from node %d with TTL = %d.\n",s,count,from, to);
            s++;
        }
    }

}
