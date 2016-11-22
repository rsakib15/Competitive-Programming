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

map<string,vector<string> >Graph;
map<string,string> path;
map<string,int> level;

void printpath(string a, string b){
    if(a==b){
        return;
    }
    printpath(path[a],b);
    cout<<path[a]<<" "<<a<<endl;
}

int BFS(string src,string dest){
    queue<string>Q;
    Q.push(src);
    level[src]=1;

    while (!Q.empty()){
        int i;
        string u = Q.front();
        Q.pop();
        if(u==dest)
            return level[u];
        FOR(i,0,Graph[u].size()){
            string v = Graph[u][i];
            if(level[v]==-1){
                level[v]=level[u]+1;
                path[v]=u;
                Q.push(v);
            }
        }
    }
    return -1;
}

int main(){
    READ();
    WRITE();
    int x,y,i,j,q=0;
    string s1,s2;

    while(SF("%d",&x)==1){
        while(x--){
            cin>>s1>>s2;
            Graph[s1].PB(s2);
            Graph[s2].PB(s1);
            level[s1]=-1;
            level[s2]=-1;
        }


        string src,dest;
        cin>>src>>dest;

        int n=BFS(src,dest);
        if(q!=0){
            cout<<endl;
        }
        q=1;
        if(n==-1)
            cout<<"No route"<<endl;
        else
            printpath(dest,src);

        Graph.clear();

    }
}
