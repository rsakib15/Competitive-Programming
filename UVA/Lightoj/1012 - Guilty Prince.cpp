#include <bits/stdc++.h>
using namespace std;

///template by Sakib Rahman///

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


int fx[]={1,-1,0,0};
int fy[]={0,0,1,-1};

char Grid[1010][1010];
int level[1010][1010];
int visited[1010][1010];

int row,col;

int BFS(int sx,int sy){

    int cnt=0;
    visited[sx][sy]=1;
    queue<pii>Q;
    Q.push(pii(sx,sy));

    while(!Q.empty()){
        pii top=Q.front();
        Q.pop();

        for(int i=0;i<4;i++){
            int tx=top.XX + fx[i];
            int ty=top.YY + fy[i];

            if(tx>=0 && tx<col && ty>=0 && ty<row && Grid[tx][ty]=='.' && visited[tx][ty]==0){
                visited[tx][ty]=1;
                level[tx][ty]=level[top.XX][top.YY]+1;
                Q.push(pii(tx,ty));
                cnt++;
            }
        }
    }

    return cnt;
}



int main(){
    //READ();
    int node,T,q=0;
    cin>>T;
    while(T--){
        q++;
        MEM(visited,0);
        MEM(Grid,'+');
        MEM(level,0);

        int x,y;
        cin>>x>>y;

        for(int i=0;i<y;i++){
            cin>>Grid[i];
        }

        int xx,yy;

        for(int i=0;i<y;i++){
            for(int j=0;j<x;j++){
                if(Grid[i][j]=='@'){
                    xx=i;
                    yy=j;
                }
            }
        }
        row=x;
        col=y;
        int c=BFS(xx,yy);

        printf("Case %d: %d\n",q,c+1);
    }
}
