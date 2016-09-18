#include <bits/stdc++.h>
using namespace std;

int main(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    long  a,b,count,m,i,j,temp,temp_i,temp_j;
    while(cin>>a>>b){
        temp_i=a;
        temp_j=b;
        if(b<a){
            temp=a;
            temp_i=b;
            temp_j=temp;
        }
        count=0;
        for(i=temp_i;i<=temp_j;i++){
            m=0;
            j=i;
            while(j!=0){
                if(j==1){
                    m++;
                    break;
                }
                else if(j%2!=0)
                    j=3*j+1;
                else
                    j=j/2;

                m++;
            }

            if(m>count)
                count=m;
        }
        cout<<a<<" "<<b<<" "<<count<<endl;
    }
    return 0;
}
