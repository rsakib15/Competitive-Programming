#include <bits/stdc++.h>
using namespace std;

int main(){
	int N;
	scanf("%d",&N);
	int max=0,a,b,total=0;
	while(N--){
		scanf("%d %d",&a,&b);
		total-=a;
		total+=b;
		if(total>max){
			max=total;
		}
	}
	printf("%d\n",max);
}
