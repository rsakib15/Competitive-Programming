#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;

int main ()
{

char a[10];
long long m=0,n,t;
cin>>t;
while(t--)
{
scanf("%s",a);
if(strcmp(a,"donate")==0)
{
	  cin>>n;
	m+=n;
} 
else if(strcmp(a,"report")==0)
	cout<<m<<endl;
}
	return 0;

}