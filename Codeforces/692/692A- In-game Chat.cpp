#include <iostream>
using namespace std;

int main(){
    int T,n;
    string s;
    cin>>T;

    while(T--){
        cin>>n;
        cin>>s;

        int c = 0;

        for(int i = n-1; i>=0; i--){
            if(s[i]==')'){
                c++;
            }
            else{
                break;
            }
        }

        if(c>n-c){
            printf("Yes\n");
        }
        else{
            printf("No\n");
        }
    }
}

