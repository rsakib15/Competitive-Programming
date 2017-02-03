/*
AUTHOR :  Sakib Rahman
PROBLEM:  Box of Bricks
ALGO:     Implementation
JUDGE:    UVA 591
*/

#pragma warning (disable : 4786)
#pragma comment(linker, "/STACK:16777216")
#include <bits/stdc++.h>

#define XX          first
#define YY          second
#define LL          long long
#define PI          acos(-1.0)
#define EPS         1e-9
#define MOD         1000000007
#define MP          make_pair
#define PB          push_back
#define SZ(x)       ((int)(x).size())
#define SQ(x)       ((x)*(x))
#define CLR(x,y)    memset(x,y,sizeof(x))
#define MAX(a,b)    ((a)>(b)?(a):(b))
#define MIN(a,b)    ((a)<(b)?(a):(b))
#define ABS(x)      ((x)<0?-(x):(x))
#define FABS(x)     ((x)+eps<0?-(x):(x))
#define VSORT(v)    sort(v.begin(),v.end())
#define UNIQUE(V)   (V).erase(unique((V).begin(),(V).end()),(V).end())
#define DIGIT(x,y)  (((int)(log10((x))/log10((y))))+1)
#define LCM(x,y)    (((x)/gcd((x),(y)))*(y))
#define FOR(i,x,y)  for(int i = (x) ; i <= (y) ; ++i)
#define ROF(i,x,y)  for(int i = (y) ; i >= (x) ; --i)
#define READ(f)     freopen(f,"r",stdin)
#define WRITE(f)    freopen(f,"w",stdout)

using namespace std;

int main(){
    int T,arr[10010];
    int sum,avg,q=0,count;
    while(cin>>T){
        if(T==0)
            break;

        count=0;
        sum=0;
        q++;

        for(int i=0;i<T;i++){
            cin>>arr[i];
            sum+=arr[i];
        }

        avg=sum/T;

        for(int i=0;i<T;i++){
            if(arr[i]>avg){
                int s=arr[i]-avg;
                count+=s;
            }

        }
        printf("Set #%d\nThe minimum number of moves is %d.\n\n",q,count);

    }
}
