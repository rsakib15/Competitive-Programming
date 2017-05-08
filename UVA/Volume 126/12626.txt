#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

int main(){
    int M,A,R,G,I,T,N;
    char str[650];
    scanf("%d",&N);
    while(N--){
        M=A=R=G=I=T=0;
        scanf("%s",&str);
        int len=strlen(str);

        for(int i=0;i<len;i++){
            if(str[i]=='A')
                A++;
            else if(str[i]=='M')
                M++;
            else if(str[i]=='R')
                R++;
            else if(str[i]=='G')
                G++;
            else if(str[i]=='I')
                I++;
            else if(str[i]=='T')
                T++;
        }

        int count=0;
        while(1){
            if(A>=3 && R>=2 && G>=1 && T>=1 && M>=1 && I>=1){
                count++;
                A=A-3;
                R=R-2;
                M=M-1;
                G=G-1;
                I=I-1;
                T=T-1;
            }
            else
                break;

        }

        printf("%d\n",count);
}
}
