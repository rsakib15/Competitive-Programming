#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

int main(){
    char s[80];
    int T,count;
    cin>>T;
    while(T--){
        scanf("%s",s);
        count=0;
        int len=strlen(s);
        int j=0;
        for(int i=0;i<len;i++){
            if(s[i]=='O'){
                j++;
                count+=j;
            }
            else if(s[i]=='X')
                j=0;
        }

        cout<<count<<endl;
        }
}
