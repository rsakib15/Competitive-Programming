#include <bits/stdc++.h>
int main(){
    long long int lower,upper,hold,test,i,j,k,divisor,max,req;
    scanf("%lld",&test);
    for(i=0;i<test;i++){

     scanf("%lld %lld",&lower,&upper);
     max=0;
     for(j=lower;j<=upper;j++){
         divisor=0;
       for(k=1;k<=sqrt(j);k++){
         if(j%k==0){
            divisor++;
         if(j/k!=k)
            divisor++;

           if(max<divisor){
                max=divisor;
                req=j;
                }
            }
            }
        }
        printf("Between %lld and %lld, %lld has a maximum of %lld divisors.\n",lower,upper,req,max);
    }
    return 0;
}
