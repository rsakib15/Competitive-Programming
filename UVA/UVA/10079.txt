#include <iostream>
#include <cstdio>
using namespace std;
int main(){
    long long n;
    while(cin>>n && n>=0){
        n=n*(n+1);
        n=n/2;
        n=n+1;
        printf("%lld\n",n);
    }

    return 0;

}
