#include<iostream>
#include<cstdio>
#include<cmath>
#define PI acos(-1)
int main()
{
    int tc;
    double l,w,r,ar,ac;
    scanf("%d",&tc);
    while(tc--)
    {
       scanf("%lf",&l);
        w=l*6/10;
        r=l/5;
        ac=PI*r*r;
        printf("%.2lf %.2lf\n", ac, l*w-ac);
    }
    return 0;
}
