#include <iostream>
#include <cstdio>
#include <bits/stdc++.h>
using namespace std;


int main(){
    int arr1[50],arr2[50],x;
    int n;
    while(cin>>n){

    for(int i=0;i<n;i++){
        cin>>x;
        arr1[x]=i;
    }

     for(int i=0;i<n;i++)
        cin>>arr2[i];

    int over=0,pos;

    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            if(arr1[arr2[i]]>arr1[arr2[j]])
                over++;
        }
    }
   cout<<over<<endl;
}
}
