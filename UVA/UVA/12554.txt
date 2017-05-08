#include <iostream>
#include <cstdio>
#include <cstring>
#include <cstdlib>
using namespace std;

int main(){
    char song[16][10]={"Happy","birthday","to","you","Happy","birthday","to","you","Happy","birthday",
                        "to","Rujia","Happy","birthday","to","you"};
    char person[105][105];
    int i,j,k=0,p,n;
    scanf("%d",&n);

    for(i=0;i<n;i++){
        scanf("%s",person[i]);
    }

    if(n>16)
        p=n/16+1;

     for(int j=0,i=0;j<16*p;j++,i++,k++){
            if(i==n)
                i=0;
            if(j==16)
                k=0;
            printf("%s: %s\n",person[i],song[k]);
        }

    return 0;

}
