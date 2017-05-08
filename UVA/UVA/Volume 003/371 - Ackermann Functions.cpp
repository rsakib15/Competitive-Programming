#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <algorithm>
using namespace std;
int main(){
    long long a,b,m,count,c,temp_a,i;
    while(scanf("%lld %lld",&a,&b)==2){
        if(a==0 && b==0)
            break;
        if(a>b)
            swap(a,b);
        count=0;
        for(i=a;i<=b;i++){
                temp_a=i;
                m=0;
                while(temp_a){
                    if((a==1 && b==1)||(a==1 && b==2))
                        m=3;
                    if(temp_a==1){
                        m++;
                        break;
                    }
                    else if(temp_a%2==0)
                        temp_a=temp_a/2;
                    else if(temp_a%2!=0)
                        temp_a=3*temp_a+1;

                    m++;

                }
                if(m>count){
                    c=i;
                    count=m;
                }

        }

        printf("Between %lld and %lld, %lld generates the longest sequence of %lld values.\n",a,b,c,count-1);


    }
}
