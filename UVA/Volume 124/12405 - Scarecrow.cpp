#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

int main(){
    int T,N,dot,q=0,i;
    char str[200];

    cin>>T;
    while(T--){
        dot=0;
        q++;
        cin>>N;
        scanf("%s",str);

        for(i=0;i<N;i++){
            if(str[i]=='.'){
                dot++;
                i=i+2;
            }
        }
        printf("Case %d: %d\n",q,dot);
    }
}
