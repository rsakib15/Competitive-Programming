#include <iostream>
#include <cstdio>
using namespace std;

int main(){
    int T,i,j,a,b,k;
    scanf("%d\n",&T);
    while(T--){
        cin>>b>>a;
        for(i=1;i<=a;i++){
            for(j=1;j<=b;j++){
                for(k=1;k<=j;k++){
                    cout<<j;
                }
                cout<<endl;
            }

            for(j=b-1;j>0;j--){
                for(k=1;k<=j;k++){
                    cout<<j;
                }
                cout<<endl;
            }
            if(i!=a)
                cout<<endl;
        }
        if (T!=0)
            cout << endl;
    }

    return 0;

}
