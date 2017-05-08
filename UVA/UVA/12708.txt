#include <iostream>
#include <cstdio>
using namespace std;

int main(){
    int n;
    long long l;
    scanf("%d",&n);
    while(n--){
        scanf("%lld",&l);
        printf("%lld\n",l>>1);

    }
}
