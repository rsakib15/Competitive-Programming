#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstdlib>

using namespace std;

int main(){
    long long arr[57];
    int n,i;
    arr[0]=0;
    arr[1]=1;

    while(cin>>n){
        if(n==0)
            break;

        for(i=2;i<=n+1;i++){
             arr[i]=arr[i-1]+arr[i-2];
        }

        if(n==1)
             printf("1");
        else if(n==0)
            printf("0");
        else
            printf("%lld",arr[n+1]);
        printf("\n");
    }
    
    return 0;

}
