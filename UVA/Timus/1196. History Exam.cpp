#include <bits/stdc++.h>
using namespace std;

int main(){
    map <int,int>m;
    int T,N,L,count=0;
    cin>>T;
    while(T--){
        cin>>N;
        m[N]++;
    }

    cin>>T;

    while(T--){
        cin>>L;
        if(m[L]>=1)
            count++;
    }

    cout<<count<<endl;

}