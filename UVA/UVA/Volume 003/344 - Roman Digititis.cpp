#include <iostream>
#include <cstdio>
using namespace std;

struct romancount{
    int i;
    int v;
    int x;
    int l;
    int c;
};

int main(){
    struct romancount roman;
    int n;
    while(scanf("%d",&n)==1){
        roman.i=0;
        roman.v=0;
        roman.x=0;
        roman.l=0;
        roman.c=0;
        if(n==0)
            break;

        for(int i=1;i<=n;i++){
            int k=i/10;
           switch(k){
            case 3:
                roman.x++;
            case 2:
                roman.x++;
            case 1:
                roman.x++;
                break;
            case 4:
                roman.x++;
            case 5:
                roman.l++;
                break;
            case 6:
                roman.l++;
                roman.x++;
                break;
            case 7:
                roman.l++;
                roman.x++;
                roman.x++;
                break;
            case 8: roman.l++;
                roman.x++;
                roman.x++;
                roman.x++;
                break;
            case 9: roman.x++;
                roman.c++;
                break;

        }


            int l=i%10;
            switch(l){
            case 3:
                 roman.i++;
            case 2:
                roman.i++;
            case 1:
                roman.i++;
                break;
            case 4:
                roman.i++;
            case 5: roman.v++;
                break;
            case 6:
                roman.v++;
                roman.i++;
                break;
            case 7:
                roman.v++;
                roman.i++;
                roman.i++;
                break;
            case 8:
                roman.v++;
                roman.i++;
                roman.i++;
                roman.i++;
                break;
            case 9:
                roman.i++;
                roman.x++;
                break;

        }
        }

        printf("%d: %d i, %d v, %d x, %d l, %d c\n",n,roman.i,roman.v,roman.x,roman.l,roman.c);


    }


}
