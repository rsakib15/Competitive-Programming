#include<iostream>
using namespace std;
int main(){
    long long a,b;
    cin>>a;
    if(a%2){
        b= a/2 + 1;
        cout<<b*(-1)<<endl;
    }
    else{
        cout<<a/2<<endl;
    }
}
