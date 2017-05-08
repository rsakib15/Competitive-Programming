#include <bits/stdc++.h>
using namespace std;

void print_array(int arr[],int N){
    for(int i=0;i<N-1;i++){
        printf("%d ",arr[i]);
    }
    printf("%d\n",arr[N-1]);
}

void insertion_sort(int arr[],int N){
    int i,j,temp;
    for(int i=1;i<N;i++){
        j=i;
        while(j>0 && arr[j-1]>arr[j]){
            swap(arr[j],arr[j-1]);
            j--;
        }
        print_array(arr,N);
    }


}

int main(){
    int N;
    int arr[110];
    while(scanf("%d",&N)==1){
		for(int i=0;i<N;i++){
			scanf("%d",&arr[i]);
		}
		print_array(arr,N);
		insertion_sort(arr,N);
    }
}
