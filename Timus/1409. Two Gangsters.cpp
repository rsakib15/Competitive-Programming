#include <iostream>
using namespace std;
int main()
{
	int a,b,total;
	while(cin>>a>>b)
	{
		total=a+b-1;
		cout<<total-a<<" "<<total-b<<endl;
	}
	return 0;
}