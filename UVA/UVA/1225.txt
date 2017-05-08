#include <iostream>
#include <cstdio>
using namespace std;

int main(){
    int one,two,three,four,five,six,seven,eight,nine,zero;
    int n,i,j,T;
    scanf("%d",&T);

    while(T--){
        one=0,two=0,three=0,four=0,five=0,six=0,seven=0,eight=0,nine=0,zero=0;
        scanf("%d",&i);
           for(j=1;j<=i;j++) {
               n=j;
            while(n!=0){
                if(n%10==0)
                    zero++;
                if(n%10==1)
                    one++;
                if(n%10==2)
                    two++;
                if(n%10==3)
                    three++;
                if(n%10==4)
                    four++;
                if(n%10==5)
                    five++;
                if(n%10==6)
                    six++;
                if(n%10==7)
                    seven++;
                if(n%10==8)
                    eight++;
                if(n%10==9)
                    nine++;

                n=n/10;
            }
           }
            printf("%d %d %d %d %d %d %d %d %d %d\n",zero,one,two,three,four,five,six,seven,eight,nine);

    }

}
