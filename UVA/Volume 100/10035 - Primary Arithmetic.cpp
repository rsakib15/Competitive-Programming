#include <iostream>
using namespace std;

int main(){
	long long int a,b,c;
	int remainder,carry;

	while(cin>>a>>b && (a!=0 || b!=0)){
		remainder=0;
		carry=0;
		while(a!=0 || b!=0){
			c=a%10+b%10+remainder;
			remainder=0;
			if(c>=10){
				remainder=1;
				carry++;
			}
			a=a/10;
			b=b/10;
		}
		if(carry==0)
			cout<<"No carry operation."<<endl;
		else if(carry==1)
			cout<<"1 carry operation."<<endl;
		else 
			cout<<carry<<" carry operations."<<endl;
	}
	return 0;
}