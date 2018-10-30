#include"Header.h"
int main()
{
	int iNum=0;
	int iRet=0;

	printf("enter the number");
	scanf("%d",&iNum);

	iRet=FactorSummation(iNum);

	printf("Difference of the factor and non factors of tha number is %d",iRet);

	return 0;
}

