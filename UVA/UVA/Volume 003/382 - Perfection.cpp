#include <iostream>
#include <cstdio>
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,i,j,k,sum;
    printf("PERFECTION OUTPUT\n");
    while(scanf("%d",&n)==1){
            sum=0;
            if(n==0)
                break;
        for(i=1;i<=n/2;i++){
            if(n%i==0)
                sum+=i;
        }
        if(sum==n)
            printf("%5d  PERFECT\n",n);
        else if(sum<n)
            printf("%5d  DEFICIENT\n",n);
        else
            printf("%5d  ABUNDANT\n",n);
    }
    printf("END OF OUTPUT\n");
    return 0;

}
