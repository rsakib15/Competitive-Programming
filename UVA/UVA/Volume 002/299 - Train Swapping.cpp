#include <iostream>
using namespace std;

int main(){
    int N,L;
    int i,j,counter;
    int arr[50];

    cin>>N;
    while(N--){
        cin>>L;

        for(i=0;i<L;i++){
            cin>>arr[i];
        }
        
        counter=0;
        for(i=0;i<L-1;i++){
            for(j=0;j<L-i-1;j++){
                if(arr[j]>arr[j+1]){
                    int temp=arr[j];
                    arr[j]=arr[j+1];
                    arr[j+1]=temp;

                    counter++;
                }
            }
        }

        cout<<"Optimal train swapping takes "<<counter<<" swaps."<<endl;

    }

    return 0;
}