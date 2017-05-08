#include <iostream>

using namespace std;

bool status[10010];
const int SIZE=10010;

int sieve(){
    for(int i=0;i<=SIZE;i++)
        status[i]=1;

    for(int i=2;i<=SIZE;i++){
        if(status[i]==1){
            for(int j=2*i;j<=SIZE;j+=i)
                status[j]=0;
        }
    }
}

int main(){
    sieve();
    int T,N;
    cin>>T;
    while(T--){
        cin>>N;
        for(int i=1;i<=N;i++){
            if(status[i]==1)
                cout<<i<<endl;
        }
        if(T)
            cout<<endl;
    }

}
