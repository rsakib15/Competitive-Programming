#include <iostream>
#include <cstdio>
using namespace std;

int main(){
    int test,T,q=0,arr[10005],max;
    cin>>T;
    while(T--){
        q++;
        cin>>test;
        for(int i=0;i<test;i++){
            cin>>arr[i];
        }
        max=arr[0];

          for(int i=1;i<test;i++){
            if(arr[i]>max)
                max=arr[i];
        }
        cout<<"Case "<<q<<": "<<max<<endl;
    }
    return 0;
}
