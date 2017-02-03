#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    int a[] = {0 , 1 , 1, 2 , 7 , 18 , 60 , 196 , 704 , 2500 , 9189 , 33896 , 126759 , 476270 , 1802312 ,6849777};

    int n;

    while(scanf("%d",&n)==1)
    {
        printf("%d\n",a[n]);
    }

    return 0;
}
