#include <bits/stdc++.h>
using namespace std;

bool cmp(const char a,const char b){
    int d=tolower(a)-tolower(b);
    return d?(d<0):a<b;
}

int main(){
    int T;
    char str[10010];
    cin>>T;
    getchar();
    while(T--){
        gets(str);
        int len=strlen(str);
        sort(str,str+len,cmp);

        do{
            cout<<str<<endl;
        }while(next_permutation(str,str+len,cmp));
    }
}
