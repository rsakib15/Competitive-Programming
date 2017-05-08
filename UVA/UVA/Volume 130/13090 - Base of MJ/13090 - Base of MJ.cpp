#include <bits/stdc++.h>
using namespace std;

int main(){
    int T,q=0;
    cin>>T;
    while(T--){
        long long a,b;
        q++;
        cin>>a>>b;
        cout<<"Case "<<q<<": "<<(a-1)/b<<endl;
    }
}
