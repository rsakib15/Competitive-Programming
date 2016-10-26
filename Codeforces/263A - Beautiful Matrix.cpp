#include <bits/stdc++.h>
using namespace std;

int main(){
	int arr[6][6];
	int col,row;
	for(int i=1;i<=5;i++){
		for(int j=1;j<=5;j++){
			scanf("%d",&arr[i][j]);
			if(arr[i][j]==1){
				col=i;
				row=j;
			}
		}
	}
	//cout<<col<<" "<<row<<endl;
	int total=abs(3-col)+abs(3-row);
	cout<<total;
}

