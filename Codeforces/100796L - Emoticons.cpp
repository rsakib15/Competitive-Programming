#include <iostream>
#include <cstdio>
using namespace std;

int main(){
    string s;
    int sc=0,fc=0,T;
    cin>>T;
    cin>>s;


    for(int i=0;i<T-1;i++){
        if(s[i] ==':'){
            if(s[i+1] ==')')
                sc++;
            else if(s[i+1]=='(')
                fc++;
        }
        else if(s[i] ==')'){
            if(s[i+1] ==':')
                fc++;
        }
        else if(s[i] =='('){
            if(s[i+1] ==':')
                sc++;
        }

    }

    if(fc>sc)
        cout<<"SAD"<<endl;
    else if(sc>fc)
        cout<<"HAPPY"<<endl;
    else
        cout<<"BORED"<<endl;
}