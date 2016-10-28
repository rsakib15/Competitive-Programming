#include <bits/stdc++.h>
using namespace std;

///*************************************************************///
#define nl              printf("\n")
#define NL              '\n'
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
#define READ()          freopen("in.txt", "r", stdin)
#define WRITE()         freopen("out.txt", "w", stdout)
#define BOOST           std::ios_base::sync_with_stdio(0);
#define MEM(n, val)     memset((n), val, sizeof(n))
#define DEBUG(x)        printf("Debug  %d !!\n",x)
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
///************************************************************///
template<class T> inline void SWAP(T &a, T &b) { T t = a; a = b; b = t; }
template<class T> inline T _max(T a, T b){ return (a > b) ? a : b; }
template<class T> inline T _min(T a, T b){ return (a < b) ? a : b; }
template<class T> inline void checkmin(T &a, T b){ if (b < a) a = b; }
template<class T> inline void checkmax(T &a, T b){ if (b > a) a = b; }
///**************************************************************///


int main(){
    LL a,b;
    while(cin>>a>>b){
        if(a>=b){
            PF("%lld",a-b);
            nl;
        }
        if(a<b){
            PF("%lld",b-a);
            nl;
        }
    }
}

