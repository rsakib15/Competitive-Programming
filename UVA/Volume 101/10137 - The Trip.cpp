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
    int N;
    double arr[10010];
    while(cin>>N){
        double sum=0,avg;

        if(N==0)
            break;

        for(int i=0;i<N;i++){
            cin>>arr[i];
            sum+=arr[i];
        }

        //cout<<"SUM: "<<sum<<endl;

        avg=sum/N;

        //cout<<"AVG: "<<avg<<endl;

        double sum1=0,sum2=0.0;

        for(int i=0;i<N;i++){
            if(arr[i]>=avg)
                sum1 += (double)(long)((arr[i]-avg)*100) / 100.0;
            else
                sum2 += (double)(long)((avg-arr[i]) * 100) / 100.0;

            //cout<<sum1<<" "<<sum2<<endl;
        }

        if(sum1>sum2)
            printf("$%.2lf\n",sum1);
        else
            printf("$%.2lf\n",sum2);

    }

}


/*

3
10.00
20.00
30.00

4
15.00
15.01
3.00
3.01

*/
