#include <iostream>
#include <cstdio>
using namespace std;

int main(){
    int inp1,inp2,T;
    while(cin>>inp1>>inp2){
        if(inp1<0 && inp2<0)
            break;
        T=inp1-inp2;

        if(T<0)
            T=T*-1;

        if(T>=50)
            T=100-T;

        printf("%d\n",T);


    }

}
