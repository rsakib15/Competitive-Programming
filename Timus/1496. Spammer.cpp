#include <bits/stdc++.h>
using namespace std;

int main(){
    map<string,int>m;
    int T;
    cin>>T;
    string str;

    for(int i=0;i<T;i++){
        cin>>str;
        m[str]++;
    }


    map<string,int>::iterator it;

    for(it=m.begin();it!=m.end();it++){
       if(it->second > 1){
        cout<<it->first<<endl;
       }
    }


}