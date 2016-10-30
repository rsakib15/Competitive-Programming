#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    string str;
    cin>>str;

    int i=0,l=0;

    while(str[i]=='<' && i<n){
        i++;
        l++;
    }

    i=n-1;

    while(str[i]=='>' && i>=0){
        i--;
        l++;
    }
    cout<<l<<endl;
}