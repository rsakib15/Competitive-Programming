#include <bits/stdc++.h>
using namespace std;

///******************Template by Sakib Rahman*******************///

///*************************************************************///
#define NL                  printf("\n")
#define nl                  '\n'
#define XX                  first
#define YY                  second
///*************************************************************///
#define SF                  scanf
#define SFI(x)              scanf("%d",&x)
#define SFII(x,y)           scanf("%d %d",&x,&y)
#define SFS(s)              scanf("%s",s)
#define SFCH                getchar()
///*************************************************************///
#define PF                  printf
#define PFI(x)              printf("%d",x)
#define PFII(x,y)           printf("%d %d",x,y)
#define PFIII(x,y,z)        printf("%d %d %d",x,y,z)
#define PFL(x)              printf("%lld",x)
#define PFLL(x,y)           printf("%lld %lld",x,y)
#define PFLL(x,y,z)         printf("%lld %lld %%lld",x,y,z)
#define PFS(s)              printf("%s",s)
#define PFCH(ch)            printf("%c",ch)

#define DEBUGI(x)           printf("Debug %d !!\n",x)
#define DEBUGD(x)           printf("Debug %llf !!\n",x)
#define DEBUGL(x)           printf("Debug %lld !!\n",x)
#define PC(test)            printf("Case %d: ", test++)

///*************************************************************///
#define MOD                 1000000007
#define EPS                 1e-9
#define MP                  make_pair
#define PB                  push_back
#define PPB                 pop_back
#define PI                  acos(-1.0)
#define INF                 1<<30
///*************************************************************///
#define READ()              freopen("input.txt", "r", stdin)
#define WRITE()             freopen("output.txt", "w", stdout)
#define BOOST               std::ios_base::sync_with_stdio(0);
#define MEM(n,val)          memset((n), val, sizeof(n))
#define CLR(ara)            mem(ara,0)
#define ST(ara)             mem(ara,-1)
#define ALL(a)              a.begin(),a.end()

///*************************************************************///
#define ABS(x)              ((x)<0?-(x):(x))
#define FABS(x)             ((x)+eps<0?-(x):(x))
#define MAX(a,b)            ((a)>(b)?(a):(b))
#define MIN(a,b)            ((a)<(b)?(a):(b))
#define FOR(I,J,K)          for(I = J; I < K; I++)
#define REV(I,J,K)          for(I = J; I > K; I--)
#define SSZ(a)              strlen(a)
#define gcd(a,b)            ll _gcd(int a,int b){if(b%a == 0) return a; _gcd(b%a,a);}
#define lcm(a,b)            ((a*b)/gcd(a,b))
#define VSORT(V)            sort(V.begin(),V.end())
#define UNIQUE(V)           (V).erase(unique((V).begin(),(V).end()),(V).end())
#define DIGIT(x,y)          (((int)(log10((x))/log10((y))))+1)
#define cmpr                bool compare(const pair<int,int>&i,const pair<int,int>&j){return i.first < j.first;}
///************************************************************///
typedef long long LL;
typedef unsigned long long ULL;
typedef vector<string> VS;
typedef pair<int, int> PII;
typedef pair<long long, long long> PLL;
typedef pair<int, string> PIS;
typedef priority_queue<int> PQ;
///************************************************************///

int dx[] = {-1, 1, 0, 0, -1, -1, 1, 1};
int dy[] = {0, 0, 1, -1, -1, 1, -1, 1};

///************************************************************///

template<class T> inline void SWAP( T &a, T &b ) { a=a^b; b=a^b; a=a^b; }
template<class T, class T1>inline void Reverse( T1 A[], T i, T j ) { for( ; i<j; i++,j-- ) SWAP( A[i], A[j] ); }


inline int BigMod(int a, int p, int M) {
	int res = 1, x = a;
	while(p) { if(p&1) res = ((LL)res * x) % M; x = ((LL)x * x) % M; p >>= 1; }
	return res;
}

///************************Template End************************///



int main(){
    //READ();
    int n,i;
    while(cin>>n){
        int arrone[10000],arrtwo[100120];
        bool flag=false;
        FOR(i,0,n){
            cin>>arrone[i]>>arrtwo[i];
            if(arrone[i]!=arrtwo[i])
			flag = true;
        }

        if(flag){
            cout<<"rated"<<endl;
        }
        else{
            bool flg=false;
            for(int i=1;i<n;i++){
                if(arrone[i]>arrone[i-1]){
                    flg = true;
                    break;
                }
            }
            if(flg)
                cout<<"unrated"<<endl;
            else
                cout<<"maybe"<<endl;
        }
    }
}
