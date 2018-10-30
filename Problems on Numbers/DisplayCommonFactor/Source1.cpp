#include"header.h"
void DisplayComFactorLarge(int iNum1,int iNum2)
{
	int i=0;
	while((i<=iNum1/2) && (i<=iNum2/2))
	{
		if((iNum1%i==0) && (iNum2%i==0))
			{
				i++;
			}
	}
	printf("%d",i);
}