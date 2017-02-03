#include <iostream>
#include <cstdio>
#include <cstring>
#include <cmath>

using namespace std;

int main(){
    char input[1000];
    long long i,j,k,sum;

    while (scanf("%s",input)){
        sum=0;
        int len=strlen(input);

    for(i=0;i<len;i++){
        j=input[i]-'0';
        sum+=j*(pow(2,len-i)-1);
        }

        if(sum==0)
            break;
        else
            printf("%lld\n",sum);

    }



}
