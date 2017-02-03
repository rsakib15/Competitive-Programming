#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
int main(){

    int i,len,count,word;
    char arr[1000];
    while(gets(arr)){
        len=strlen(arr);
        count=0;
        word=0;
       for (i = 0;i!=len;i++){
            if((arr[i]>='A' && arr[i]<='Z') || (arr[i]>='a' && arr[i]<='z')){
                if(count!=1){
                    count=1;
                    word++;
                }
            }
            else
                count=0;
        }
        cout<<word<<endl;
    }
    return 0;
}
