#include <iostream>
#include <cstdio>
using namespace std;

int main(){
    double hour,min;
    while(scanf("%lf:%lf",&hour,&min)==2){
        if(hour==0 && min==0)
            break;

        hour=hour*30+(min/60)*30;
        min=min*6;
        hour=hour-min;

        if(hour<0)
            hour=hour*-1;

        if(hour>180)
            hour=360-hour;

        printf("%.3lf\n",hour);

    }

}
