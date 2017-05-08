#include <iostream>
#include <cmath>
#include <cstdio>
using namespace std;

int main(){
	int a,b,n,x,y,v;
	double time,distance;
	cin>>a>>b;
	cin>>n;
	double min=100000000.00;
	for(int i=0;i<n;i++){
		cin>>x>>y>>v;
        distance=(a-x)*(a-x)+(b-y)*(b-y);
        distance=sqrt(distance);
		time=distance/v;

		if(time<min)
			min=time;
	}
	printf("%.20lf",min);
}