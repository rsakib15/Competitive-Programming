#include <iostream>
#include <cstdio>
using namespace std;
int main(){
    int a,b,c,T;
    scanf("%d",&T);
    while(T--){
        scanf("%d %d %d",&a,&b,&c);
        int res=c*(2*a-b)/(a+b);
        printf("%d\n",res);
    }
   return 0;
}