#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;

int main(){

    double length,width,depth,sum,weight;
    int T,count=0;

    cin>>T;
    while(T--){
        cin>>length>>width>>depth>>weight;
        sum=length+width+depth;
        if ((length<=56.0 && width<=45.0 && depth<=25.0 && weight<=7)|| (sum<=125.0 && weight<=7)){
            count++;
            printf("%d\n",1);
        }
        else
            printf("%d\n",0);

    }
    printf("%d\n",count);
    return 0;
}
