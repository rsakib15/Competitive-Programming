#include <iostream>
#include <cstdio>
using namespace std;
int main(){
    int digit[3000]={0},sum[1000];
    digit[0]=1;
    int rem=0;
    for(int i=1;i<=1000;i++){
        for(int j=0;j<3000;j++){
            rem= digit[j]*i+rem;
            digit[j]=rem %10;
            rem=rem/10;
        }
        for(int j=0;j<3000;j++)
            sum[i]+=digit[j];
    }
    int n;
    while(scanf("%d",&n)==1){
        printf("%d\n",sum[n]);
    }
}
