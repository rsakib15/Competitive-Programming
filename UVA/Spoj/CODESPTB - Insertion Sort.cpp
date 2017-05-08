#include <bits/stdc++.h>
using namespace std;
int arr[10000010];
void insertion_sort(int arr[],int N){
    int i,j,temp,count=0;
    for(int i=0;i<N;i++){
        int value=arr[i];
        for(j=i-1;j>=0 && arr[j]>value;j--){
            arr[j+1]=arr[j];
            count++;
        }
        arr[j+1]=value;
    }
    printf("%d\n",count);
}

int main(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    int N,T;

    scanf("%d",&T);
    while(T--){
		scanf("%d",&N);
		for(int i=0;i<N;i++){
			scanf("%d",&arr[i]);
		}
		insertion_sort(arr,N);
    }
}
