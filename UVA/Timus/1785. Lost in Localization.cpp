#include <bits/stdc++.h>
using namespace std;

int main(){
    int a;
    while(cin>>a){
        if(a>=1 && a<=4)
            cout<<"few"<<endl;
        else if(a>=5 && a<=9)
            cout<<"several"<<endl;
        else if(a>=10 && a<=19)
            cout<<"pack"<<endl;
        else if(a>=20 && a<=49)
            cout<<"lots"<<endl;
        else if(a>=50 && a<=99)
            cout<<"horde"<<endl;
        else if(a>=100 && a<=249)
            cout<<"throng"<<endl;
        else if(a>=250 && a<=499)
            cout<<"swarm"<<endl;
        else if(a>=500 && a<=999)
            cout<<"zounds"<<endl;
        else
            cout<<"legion"<<endl;
    }


}