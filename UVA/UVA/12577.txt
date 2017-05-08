#include <iostream>
#include <cstdio>
using namespace std;
int main (){
    char a;
    int n=0;
    while(scanf("%c",&a)!=EOF)
    {
        if (a=='*')
            break;
        else if (a=='H')
            printf("Case %d: Hajj-e-Akbar\n",++n);
        else if (a=='U')
            printf("Case %d: Hajj-e-Asghar\n",++n);
    }

    return 0;

}