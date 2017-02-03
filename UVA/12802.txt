#include <iostream>
#include <cstdio>
using namespace std;

int main(){
    long long i,h,j,rem,total;
    while(cin>>i){
        h=i*2;
        j=i;
        printf("%lld\n",h);
        rem=0;
        total=0;
       int flag=0;

       for(int a=2;a<=i/2;++a){
            if(i%a==0){
              flag=1;
                break;
        }
        }
        while(i!=0){
            rem=i%10;
            total=total*10+rem;
            i=i/10;
        }

        if(j==total && flag==0)
            break;
    }



}
