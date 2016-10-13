#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char arr[100];
    int T,len,i;
    cin>>T;
    while(T--){
        cin>>arr;
        len=strlen(arr);
        if(len<=10){
                cout<<arr<<endl;
            }
        if(len>10)
        {
            cout<<arr[0]<<len-2<<arr[len-1]<<endl;
        }
    }
    return 0;
}