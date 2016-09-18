#include <bits/stdc++.h>
using namespace std;

int main(){
    long long n,c;
    int arr[100010];
    scanf("%d %d",&n,&c);
    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);

    long long count=1;

    for(int i=0;i<n-1;i++){
        if(arr[i+1]-arr[i]<=c)
            count++;
        else
            count=1;

    }

    printf("%d\n",count);
}