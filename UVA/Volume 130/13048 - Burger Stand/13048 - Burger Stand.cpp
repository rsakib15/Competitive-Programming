#include <bits/stdc++.h>
using namespace std;

int main(){
    int T,q=0;
    string str;
    cin>>T;
    while(T--){
        cin>>str;
        int len=str.size();
        int count=0;

        for(int i=0;i<len;i++){
            if(str[i]!='_')
                continue;

            if((i+1<len && str[i+1]=='B') || (i+2<len && str[i+2]=='B') || (i-1<len && str[i-1]=='S') || (i+1<len && str[i+1]=='S'))
                continue;
            else
                count++;
            cout<<count<<endl;
        }

    }

}
