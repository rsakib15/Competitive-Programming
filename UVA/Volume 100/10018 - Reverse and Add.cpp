#include <iostream>
#include <cstdio>

using namespace std;

int main(){
    long long T,i,j,k,q;

    cin>>T;
    while(T--){
        q=0;
        cin>>i;
        j=i;


        while(1){
            k=0;
            while(j!=0){
                k=k*10+j%10;
                j=j/10;

            }

            if(k==i){
                break;
            }
            else{
                j=i+k;
                i=i+k;
                q++;
            }

        }

        printf("%lld %lld\n",q,k);
    }


}

