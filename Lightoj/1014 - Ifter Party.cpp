#include <iostream>
#include <cstdio>
#include <cmath>
#include <bits/stdc++.h>
using namespace std;
int main(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    vector<long long>V;
    long long C,T,P,L,i,j;
    scanf("%lld",&T);
    for(j=1;j<=T;j++){
        scanf("%lld %lld",&P,&L);
        C=P-L;
        printf("Case %lld: ",j);
        if(C<=L){
            printf("impossible\n");
            continue;
        }
        long long n=sqrt(C);
        for(i=1;i<=n;i++){
            if(C%i == 0){
                V.push_back(i);
                V.push_back(C/i);
            }
        }

        sort(V.begin(),V.end());
        V.resize(distance(V.begin(),unique(V.begin(),V.end())));
        for(i=0;i<V.size()-1;i++){
            if(V[i]>L)
                cout<<V[i];
            if(P!=1 && V[i]>L)
                cout<<" ";
        }
        cout<<V[V.size()-1];
        cout<<endl;
        V.clear();
    }
    return 0;
}
