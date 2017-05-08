#include <iostream>
#include <cstdio>
using namespace std;

int main(){
    double sum,avg,money,rem;
    int i,j,T,q=0;
    scanf("%d",&T);
    while(T--){
        q++;
        sum=0.0;
        for(i=0;i<12;i++){
            scanf("%lf",&money);
            sum+=money;
        }
        avg=sum/12.0;
        int th=int(avg)/1000;
        rem=avg-(1000*th);
        if(th==0)
           printf("%d $%.2lf\n",q,rem);
        else
            printf("%d $%d,%.2lf\n",q,th,rem);
    }
}
