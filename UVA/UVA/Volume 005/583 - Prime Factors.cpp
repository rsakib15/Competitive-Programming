#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

int main(){
    long long inp;
    int arr[1000],n;
    while(scanf("%lld",&inp)==1){
            n=0;
        if(inp==0)
            break;

        printf("%lld =",inp);

        if(inp<0){
            arr[0]=-1;
            n++;
            inp=inp*-1;
        }

        while (inp%2 == 0){
            arr[n++]=2;
            inp = inp/2;
        }
        for (int i = 3; i<= sqrt(inp); i = i+2){
            while (inp%i == 0){
                arr[n++]=i;
                inp = inp/i;
            }
        }


        if (inp> 2)
            arr[n++]=inp;

        for(int i=0;i<n;i++){
            printf(" %d",arr[i]);
            if(i!=n-1)
                printf(" x");
        }
        printf("\n");


    }
}
