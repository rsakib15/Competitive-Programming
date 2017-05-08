#include <iostream>
#include <cstring>
#include <cstdio>

using namespace std;

int main(){
    int len;
    int i;
    char a[10000],b[10000];
    while(gets(a)){
        len=strlen(a);

        for(i=0;i<len;++i){
            b[i]=a[i]-7;
        }
        b[i]='\0';
        puts(b);

    }

    return 0;

}
