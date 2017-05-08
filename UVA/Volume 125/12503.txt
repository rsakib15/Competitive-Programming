#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

int main(){
    int p,i,T,n,l;
    char ins[10];
    int pos[105];
    scanf("%d",&T);
    while(T--){
        scanf("%d",&n);
        p=0;
        for(i=0;i<n;i++){
            scanf("%s",ins);
            if(strcmp(ins,"LEFT")==0){
                p=p-1;
                pos[i]=-1;
            }
            else if(strcmp(ins,"RIGHT")==0){
                p=p+1;
                pos[i]=1;
            }
            else{
                cin>>ins>>l;
                p=p+pos[l-1];
                pos[i]=pos[l-1];
            }
        }
        cout<<p<<endl;

    }

    return 0;
}
