#include <bits/stdc++.h>
using namespace std;

int main(){
	int N;
	scanf("%d",&N);
	int count=0,a,b,total=0;
	while(N--){
		scanf("%d %d",&a,&b);
		total = abs(a-b);
		if(total>=2){
			count++;;
		}
	}
	printf("%d\n",count);
}
