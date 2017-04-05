#include <bits/stdc++.h>
#define long long long
using namespace std;

int main(){
    int T;
    cin>>T;
    while(T--){
        int flag=0;
        string str;
        cin>>str;
        int len=str.size();

        if(str=="1" || str=="4" || str=="78")
            cout<<"+"<<endl;

        else if(str[len-2]=='3' && str[len-1]=='5')
            cout<<"-"<<endl;
        else if(str[0]=='9' && str[len-1]=='4')
            cout<<"*"<<endl;
        else
            cout<<"?"<<endl;
    }
}
