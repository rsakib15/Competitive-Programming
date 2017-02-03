


#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
int bigmod(long long base,long long power,long long mod);
using namespace std;

int main(){
    long long base,T,p,power,mod=10,res;
    cin>>base>>T;
    power=0;
    while(T--){
        cin>>p;
        power+=p;
    }

    res=bigmod(base,power,mod);
    cout<<res<<endl;
}

int bigmod(long long base,long long power,long long mod){
    long long p1,p2;
    if(power==0)
        return 1;
    else if(power%2==0){
        p1=(base,power/2,mod);
        return (p1*p1)%mod;

    }
    else{
        p1=base%mod;
        p2=(base,power-1,mod);
        return (p1*p2)%mod;
    }




}
