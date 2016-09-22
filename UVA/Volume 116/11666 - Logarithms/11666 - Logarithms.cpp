#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    while(cin>>n){
        if(n==0)
            break;
        int L=log(n);
        double res=1-n/exp(L);

        if(abs(res)>=1.0){
            L++;
            res=1-n/exp(L);
        }

        printf("%d %.8lf\n", L, res);

    }
}
