#include <bits/stdc++.h>
#define WHITE 0
#define GRAY 1
#define BLACK 2
#define SIZE 1010
using namespace std;

char Grid[SIZE][SIZE];
bool visited[SIZE][SIZE];
int dx[10]={0,-1,1,0},dy[10]={-1,0,0,1};

int BFS(int x,int y,int v,int e){
    int cnt=0;
    int n1,n2;

    queue<int>Q1;
    queue<int>Q2;

    Q1.push(x);
    Q2.push(y);

    while(!Q1.empty()){
        int ux,uy,n1,n2;
        n1=Q1.front(); Q1.pop();
        n2=Q2.front(); Q2.pop();

       // cout<<"N1: "<<n1<<" N2: "<<n2<<endl;

        visited[x][y]=GRAY;

        for(int i=0;i<4;i++){
            ux=n1+dx[i];
            uy=n2+dy[i];

        //cout<<"ux  = "<<ux<<" uy = "<<uy<<endl;

        if(ux>=0 && ux<e && uy>=0 && uy<v){
            if(Grid[ux][uy]=='.' && visited[ux][uy]==WHITE){
                    Q1.push(ux);
                    Q2.push(uy);
                    visited[ux][uy]=GRAY;
                    cnt++;
                }
            }

        }
        visited[n1][n2]=BLACK;


    }
    while(!Q1.empty())Q1.pop();
    while(!Q2.empty())Q2.pop();

    return cnt;
}

int main(){
    //freopen("input.txt","r",stdin);
    int T,q=0,W,H,x,y,i,j,xx,yy;
    scanf("%d",&T);
    while(T--){
        q++;
        memset(visited,WHITE,sizeof(visited));
        memset(Grid,0,sizeof(Grid));
        cin>>x>>y;
        for(i=0;i<y;i++){
            cin>>Grid[i];
        }
        for(int i=0;i<y;i++){
            for(j=0;j<x;j++)
                if(Grid[i][j]=='@'){
                    xx=i;
                    yy=j;

            }
        }


        //cout<<"X= "<<xx<<" Y= "<<yy<<endl;
        int c=BFS(xx,yy,x,y);
        printf("Case %d: %d\n",q,c+1);


    }

}
