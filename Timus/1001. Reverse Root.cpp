#include <iostream>
#include <cmath>
#include <cstdio>
using namespace std;
double arr[100000000];
int main(){
    long long N;
    double ans;
    long long j=0;
    while(cin>>N){
        arr[j]=sqrt(N);
        j++;
    }

    for(int i=j-1;i>=0;i--)
        printf("%.4lf\n",arr[i]);
}