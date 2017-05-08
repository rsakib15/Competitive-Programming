#include <bits/stdc++.h>
using namespace std;
int main(){
    int T,m;
    while(cin>>T){
        queue<int>Q;
        if(T==0)
            break;
        for(int i=1;i<=T;i++){
            Q.push(i);
        }

        cout<<"Discarded cards:";
        while(Q.size()>1){
            cout<<' '<<Q.front();
            Q.pop();
            int top=Q.front();
            Q.pop();
            if(Q.size()>=1)
                cout<<',';
            Q.push(top);
        }

        cout<<endl;
        cout<<"Remaining card: "<<Q.front()<<endl;
        while(!Q.empty()){
            Q.pop();
        }
    }
}