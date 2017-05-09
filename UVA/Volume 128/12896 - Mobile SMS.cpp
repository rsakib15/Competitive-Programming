#include <iostream>
#include <cstdio>
using namespace std;

struct keypress{
    int number;
    int press;
};

int main(){
    keypress key[110];
    int T,L;
    scanf("%d",&T);
    while(T--){
        scanf("%d",&L);
        for(int i =0;i<L;i++)
            scanf("%d",&key[i].number);
        for(int i =0;i<L;i++)
            scanf("%d",&key[i].press);

        for(int i=0;i<L;i++){
            if(key[i].number==0){
                if(key[i].press==1)
                    printf(" ");
                }
            else if(key[i].number==1){
                if(key[i].press==1)
                    printf(".");
                else if(key[i].press==2)
                    printf(",");
                else if(key[i].press==3)
                    printf("?");
                else if(key[i].press==4)
                    printf("\"");
                }
            else if(key[i].number==2){
                if(key[i].press==1)
                    printf("a");
                else if(key[i].press==2)
                    printf("b");
                else if(key[i].press==3)
                    printf("c");
                }
             else if(key[i].number==3){
                if(key[i].press==1)
                    printf("d");
                else if(key[i].press==2)
                    printf("e");
                else if(key[i].press==3)
                    printf("f");
                }
              else if(key[i].number==4){
                if(key[i].press==1)
                    printf("g");
                else if(key[i].press==2)
                    printf("h");
                else if(key[i].press==3)
                    printf("i");

                }
              else if(key[i].number==5){
                if(key[i].press==1)
                    printf("j");
                else if(key[i].press==2)
                    printf("k");
                else if(key[i].press==3)
                    printf("l");
                }
              else if(key[i].number==6){
                if(key[i].press==1)
                    printf("m");
                else if(key[i].press==2)
                    printf("n");
                else if(key[i].press==3)
                    printf("o");
                }
              else if(key[i].number==7){
                if(key[i].press==1)
                    printf("p");
                else if(key[i].press==2)
                    printf("q");
                else if(key[i].press==3)
                    printf("r");
                else if(key[i].press==4)
                    printf("s");
                }
              else if(key[i].number==8){
                if(key[i].press==1)
                    printf("t");
                else if(key[i].press==2)
                    printf("u");
                else if(key[i].press==3)
                    printf("v");
                }
              else if(key[i].number==9){
                if(key[i].press==1)
                    printf("w");
                else if(key[i].press==2)
                    printf("x");
                else if(key[i].press==3)
                    printf("y");
                else if(key[i].press==4)
                    printf("z");
                }


            }
        printf("\n");
    }

}
