#include <iostream>
#include <cstdio>
using namespace std;

int main(){
    register unsigned int a,b,c,d,e,f,g,h,i,j;
    while (scanf("%u%u%u%u%u%u%u%u%u%u",&a,&b,&c,&d, &e, &f, &g, &h, &i, &j) == 10){
        if(a^f && b^g && c^h && d^i && e^j)
            printf("Y\n");
        else
            printf("N\n");
    }
    return 0;
}