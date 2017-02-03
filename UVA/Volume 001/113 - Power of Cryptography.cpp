#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

int main(){
    double T,num,n;
    double res;

    while(cin>>n>>num){

        res=pow(num,1.0/n);
        printf("%.0lf\n",res);
    }
}
