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
    char arr[550][550];
    char command,color;
    int M,N,i,j;
    while(cin>>command){
        if(command=='I'){
            cin>>M>>N;
            FOR(i,0,N){
                FOR(j,0,M){
                    arr[i][j]='O';
                }
            }
        }

        else if(command=='C'){
            FOR(i,0,N){
                FOR(j,0,M){
                    arr[i][j]='O';
                }
            }
        }

        else if(command=='L'){
            int X,Y;
            cin>>X>>Y>>color;
            arr[Y-1][X-1]=color;
        }

        else if(command=='V'){
            int X,Y1,Y2;
            cin>>X>>Y1>>Y2>>color;
            if(Y1>Y2)
                swap(Y1,Y2);
            FOR(i,Y1-1,Y2)
                arr[i][X-1]=color;

        }

        else if(command=='H'){
            int X,Y1,Y2;
            cin>>Y1>>Y2>>X>>color;
            if(Y1>Y2)
                swap(Y1,Y2);
            FOR(i,Y1-1,Y2)
                arr[X-1][i]=color;
        }

        else if(command=='K'){
            int X1,X2,Y1,Y2;
            cin>>X1>>Y1>>X2>>Y2>>color;
            if(Y1>Y2)
                swap(Y1,Y2);
            if(X1>X2)
                swap(X1,X2);
            FOR(i,Y1-1,Y2){
                FOR(j,X1-1,X2){
                    arr[i][j]=color;
                }
            }
        }

        else if(command=='F'){
            int X,Y;
            cin>>X>>Y>>color;
            char col=arr[Y-1][X-1];

            FOR(i,0,N){
                FOR(j,0,M){
                    if(arr[i][j]==col)
                        arr[i][j]=color;
                }
            }
        }

        else if(command=='S'){
            string filename;
            cin>>filename;
            cout<<filename<<endl;

            FOR(i,0,N){
                FOR(j,0,M){
                    cout<<arr[i][j];
                }
                cout<<endl;
            }

        }

        else if(command=='X'){
            break;
        }


    }

}


/*

I 5 6
L 2 3 A
S one.bmp
I 5 6
L 2 3 A
S one.bmp
G 2 3 J
F 3 3 J
V 2 3 4 W
H 3 4 2 Z
S two.bmp
X



*/
