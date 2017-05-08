#include <iostream>
using namespace std;

int main(){
    string str;
    int T,tc;
    cin>>T;
    while(T--){
        cin>>str;
        cin>>tc;
        string l="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
        int n=str.size();
        char c1,c2;
        while(tc--){
            cin>>c1>>c2;
            for(int i=0;i<26;i++){
                if(l[i]==c2)
                    l[i]=c1;
            }
        }

        for(int i=0;i<n;i++){

            if(str[i]=='_')
                cout<<"_";
            else
                cout<<l[str[i]-65];
        }

        cout<<endl;


    }
}
