#include <stdio.h>
int main()
{
	float inp,i,total=0;
	for(i=0;i<12;i++)
	{
		scanf("%f",&inp);
		total=total+inp;
	}
	total=total/12;
 
	printf("$%.2f\n",total);
 
	return 0;	
}