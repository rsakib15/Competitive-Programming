#include <bits/stdc++.h>
using namespace std;

int main(){
    int T,q=0,a;
    cin>>T;
    while(T--){
        int flag=0;
        q++;
        for(int i=0;i<13;i++){
            cin>>a;
            if(a==0)
                flag=1;
        }
        if(flag==1)
            cout<<"Set #"<<q<<": No"<<endl;
        else
            cout<<"Set #"<<q<<": Yes"<<endl;
    }
}
