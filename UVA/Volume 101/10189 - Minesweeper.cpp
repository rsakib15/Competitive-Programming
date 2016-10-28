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
///************************************************************///


int main(){
    ///BOOST;
    ///READ();
    ///WRITE();
    int m,n,i,j;
    char str[110][110];
    int res[110][110];
    string s;
    int q=0;

    while(cin>>n>>m){
        q++;
        if(n==0 && m==0)
            break;

        MEM(str,'-');
        MEM(res,0);

        FOR(i,1,n+1){
            cin>>s;
            for(int j=1;j<m+1;j++)
                str[i][j]=s[j-1];
        }

        FOR(i,1,n+1){
            FOR(j,1,m+1){
                int count=0;
                int flag=0;
                if(str[i][j]!='*'){
                    flag=1;
                    if(str[i][j-1]=='*')
                        count++;
                    if(str[i][j+1]=='*')
                        count++;
                    if(str[i-1][j-1]=='*')
                        count++;
                    if(str[i-1][j]=='*')
                        count++;
                    if(str[i-1][j+1]=='*')
                        count++;
                    if(str[i+1][j-1]=='*')
                        count++;
                    if(str[i+1][j]=='*')
                        count++;
                    if(str[i+1][j+1]=='*')
                        count++;
                }
                if(flag==0)
                    res[i][j]=-1;
                else
                    res[i][j]=count;
            }
        }
        if(q>1)
            cout<<endl;
        cout<<"Field #"<<q<<":"<<endl;

        FOR(i,1,n+1){
            FOR(j,1,m+1){
                if(res[i][j]==-1)
                    cout<<'*';
                else
                    cout<<res[i][j];
            }
            cout<<endl;
        }
    }
}


/*

4 4
*...
....
.*..
....
3 5
**...
.....
.*...
0 0

*/
