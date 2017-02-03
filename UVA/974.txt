#include <iostream>
#include <cstdio>
using namespace std;


int main(){
    int a,b,c[101],d,i,j,k,l,arr[1001],n,p;
    arr[0]=9;
    arr[1]=45;
    arr[2]=55;
    arr[3]=99;
    arr[4]=297;
    arr[5]=703;
    arr[6]=999;
    arr[7]=2223;
    arr[8]=2728;
    arr[9]=4879;
    arr[10]=4950;
    arr[11]=5050;
    arr[12]=5292;
    arr[13]=7272;
    arr[14]=7777;
    arr[15]=9999;
    arr[16]=17344;
    arr[17]=22222;
    arr[18]=38962;


    scanf("%d",&n);
    for(i=1;i<=n;i++){
        printf("case #%d\n",i);
        l=0;
        scanf("%d %d",&a,&b);
        for(j=a;j<=b;j++){
            for(k=0;k<19;k++){
                if(j==arr[k])
                c[l++]=j;
            }
        }
        if(l==0)
            printf("no kaprekar numbers\n");
        else {
            for(p=0;p<l;p++)
                printf("%d\n",c[p]);
        }
        if((i-1)!=n-1)printf("\n");
    }
    return 0;
}
